/**
 * Document: MaxCompiler Tutorial (maxcompiler-tutorial.pdf)
 * Chapter: 3      Example: 1      Name: Moving Average Simple
 * MaxFile name: MovingAverageSimple
 * Summary:
 *   CPU code for the three point moving average design.
 */

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "WavePropagation.h" 			// Includes .max files
#include <MaxSLiCInterface.h>	// Simple Live CPU interface

void init_problem(int nx, int nz, int dx, float dt, int pad_size, float abs_fact,
    float* velocity, float* density, float* abs_facts) 
{
    for (int i = 0; i < nz; ++ i) {
        for (int j = 0; j < nx; ++ j) {
            float vel;
            if (i >= 133 && i < 143 && j >= 220+pad_size && j < 230+pad_size) {
                vel = 3500.0;
            }else if (i > 113) {
				int fact = min(i - 113, 160);
                vel = 1750.0 + fact * 10.0;
            }else {
                vel = 1500.0;
            }

            velocity[i*nx+j] = vel;

            if (vel > 1650.0) {
                density[i*nx+j] = 1.0 / (0.23 * pow(vel, 0.25));
            } else if (vel < 1500) {
                density[i*nx+j] = 1.0;
            } else {
                float ratio = (vel-1500.0)/150.0;
                density[i*nx+j] = 1.0 / (ratio * 0.23 * pow(vel, 0.25) + (1-ratio) * 1.0);
            }

            float abs = max(max(pad_size-j, j-pad_size-500), max(i-353, 0));
            abs = pow(abs, 2) / pow(pad_size, 2);
            abs = abs * vel * dt / dx * abs_fact;
            abs_facts[i*nx+j] = abs;
        }
	}	
}


void get_ricker(int total_steps, float dt, float freq, float amplitude, float* src)
{
	int ns = 2.1 / (freq * dt) + 0.9999;
    float ts = ns * dt;
    float a2 = pow(freq * M_PI, 2);
    float t0 = ts/2 - dt/2;
    float max_source = 0;
    for (int i = 0; i < total_steps; ++i) {
        if (i < ns) {
            float at2 = a2*pow(i*dt-t0, 2);
            src[i] = amplitude * (1-2*at2) * exp(-at2);
            if (src[i] > max_source) {
                max_source = src[i];
            }
        }else {
            src[i] = 0.0;
        }
    }
}

void update_boundary(int nx, float dtdx2, float* velocity, float* absorb, 
    float* den, float* prev, float* curr, float* next)
{
    for (int cell = 2*nx; cell < 4*nx; ++cell) {
        int offset_1 = cell / nx == 2 ? cell+nx : cell-nx; 
        int offset_2 = cell / nx == 2 ? cell : cell-2*nx; 
		float d2z = 1.0 / 90.0 * (curr[offset_1] * den[offset_1] + 
			    curr[cell+3*nx] * den[cell+3*nx]) -
			3.0 / 20.0 * (curr[cell+offset_2] * den[cell+offset_2] + 
				curr[cell+2*nx] * den[cell+2*nx]) +
			3.0 / 2.0 * (curr[cell-nx] * den[cell-nx] + 
				curr[cell+nx] * den[cell+nx]) -
			49.0 / 18.0 * (curr[cell] * den[cell]);

		float d2x = 1.0 / 90.0 * (curr[cell-3] * den[cell-3] + 
			    curr[cell+3] * den[cell+3]) -
			3.0 / 20.0 * (curr[cell-2] * den[cell-2] + 
				curr[cell+2] * den[cell+2]) +
			3.0 / 2.0 * (curr[cell-1] * den[cell-1] + 
				curr[cell+1] * den[cell+1]) -
			49.0 / 18.0 * (curr[cell] * den[cell]);
        
        float q = absorb[cell];
        
     	float result = ((d2x+d2z)*dtdx2*velocity[cell]*velocity[cell]/den[cell]+ 
			(2.0-q*q)*curr[cell]- (1.0-q)*prev[cell]) / (1.0+q);

		result = cell%nx>2 && cell%nx<nx-3 ? result : 0;
        next[cell] = result;
    }

}

int main()
{
	int dx = 7;
    int abs_layer_coefficient = 5;
    int pad_size = ceil(dx * abs_layer_coefficient);
    int nx = 501 + 2*pad_size;
    int nz = 351 + pad_size + 3;
    int receiver_depth = 73;
    int sx = 150 + pad_size;
    int sz = 83;
     
    float frequency = 10.0;
    float total_time = 2.0;
    float source_amplitude = 1.0;
    float courant_number = 0.3;
    float abs_fact = 0.4;
    float dt = courant_number * dx / 3500.0;
    int time_steps = floor(total_time / dt);

	int buffer_size = (nx * nz * sizeof(float) / 4 + 1) * 4;

    float* vel = malloc(buffer_size); 
    float* den = malloc(buffer_size);
    float* absorb = malloc(buffer_size);
	printf("init problem\n");

	init_problem(nx, nz, dx, dt, pad_size, abs_fact, vel, den, absorb);

	float* src = malloc(time_steps * sizeof(float));
	get_ricker(time_steps, dt, frequency, source_amplitude, src);

    float* fields[3];
	for (int i = 0; i < 3; ++ i) {
		fields[i] = calloc((nx*nz/4+1)*4, sizeof(float));
	}

	int prev_idx = 0;
	int curr_idx = 1;
	int next_idx = 2;

	float* result = malloc(time_steps * (nx - 2 * pad_size) * sizeof(float));
	printf("Running DFE\n");

    fields[curr_idx][sz*nx+sx] = src[0];
    //max_run_t* last = NULL;
	max_run_t* run = NULL;
    for (int step = 0; step < time_steps; ++ step) 
	{
		int tmp_idx = prev_idx;
		prev_idx = 	curr_idx;
		curr_idx = next_idx;
		next_idx = tmp_idx;
        fields[curr_idx][sz*nx+sx] = fabs(src[step]) > 0.0000001 ? src[step] : fields[curr_idx][sz*nx+sz];
        //last = this;
	    run = WavePropagation_nonblock((dt*dt)/(dx*dx), nx, nz, absorb+5*nx, 
	        fields[curr_idx]+2*nx, den+2*nx, fields[prev_idx]+5*nx, vel+5*nx, fields[next_idx]+5*nx);

        update_boundary(nx, (dt*dt)/(dx*dx), vel, absorb, den, fields[prev_idx], fields[curr_idx], fields[next_idx]);
        max_wait(run);

        printf("iteration: %d with value: %f\n", step-1, fields[next_idx][73*nx+184]);
        memcpy(result+step*(nx-2*pad_size), fields[next_idx]+nx*receiver_depth+pad_size, (nx-2*pad_size)*sizeof(float));
	}
	printf("Finish DFE\n");
	FILE * f;
	f = fopen("./fpga.csv", "w");
	fwrite(result, sizeof(float), (nx-2*pad_size)*time_steps, f);
	fclose(f);
	free(vel);
	free(den);
	free(absorb);
	free(result);
	free(fields[0]);
	free(fields[1]);
	free(fields[2]);
	return 0;
}
