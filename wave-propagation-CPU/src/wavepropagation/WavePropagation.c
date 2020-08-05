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
    for (int i = 0; i < total_steps; ++i) {
        if (i < ns) {
            float at2 = a2*pow(i*dt-t0, 2);
            src[i] = amplitude * (1-2*at2) * exp(-at2);
        }else {
            src[i] = 0.0;
        }
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

    int cell_numbers = nx*(nz-6) - 1 + (6*nx/4+1)*4;

	int buffer_size = (nx * nz * sizeof(float) / 4 + 1) * 4;

    float* vel = calloc(cell_numbers, sizeof(float)); 
    float* den = calloc(cell_numbers, sizeof(float));
    float* absorb = calloc(cell_numbers, sizeof(float));
	printf("init problem\n");

	init_problem(nx, nz, dx, dt, pad_size, abs_fact, vel, den, absorb);

	float* src = malloc(time_steps * sizeof(float));
	get_ricker(time_steps, dt, frequency, source_amplitude, src);

    float* fields[3];
	for (int i = 0; i < 3; ++ i) {
		fields[i] = calloc(cell_numbers, sizeof(float));
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
        fields[curr_idx][sz*nx+sx] = fabs(src[step]) > 0.0000001 ? src[step] : fields[curr_idx][sz*nx+sx];
        //last = this;
	    run = WavePropagation_nonblock((dt*dt)/(dx*dx), nx, nz, absorb+3*nx, 
	        fields[curr_idx], den, fields[prev_idx]+3*nx, vel+3*nx, fields[next_idx]+3*nx);

        //update_boundary(nx, (dt*dt)/(dx*dx), vel, absorb, den, fields[prev_idx], fields[curr_idx], fields[next_idx]);
        max_wait(run);

        printf("iteration: %d with value: %f\n", step, fields[next_idx][73*nx+184]);
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
