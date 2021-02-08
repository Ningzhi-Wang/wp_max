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
    int nz = 351 + pad_size + 1;
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

    max_file_t *kernel = WavePropagation_init();
    int burst_size = max_get_burst_size(kernel, NULL) / sizeof(float);
    printf("burst size :%d\n", burst_size);
    int cell_numbers = (nx*nz / burst_size + 1)*burst_size;

    float* vel = calloc(cell_numbers, sizeof(float));
    float* den = calloc(cell_numbers, sizeof(float));
    float* absorb = calloc(cell_numbers, sizeof(float));
	printf("init problem\n");

	init_problem(nx, nz, dx, dt, pad_size, abs_fact, vel, den, absorb);

	float* src = calloc((time_steps / burst_size + 1) * burst_size, sizeof(float));
	get_ricker(time_steps, dt, frequency, source_amplitude, src);

    float* fields[3];
	for (int i = 0; i < 3; ++ i) {
		fields[i] = calloc(cell_numbers, sizeof(float));
	}

	float* result = malloc(time_steps * nx * sizeof(float));
	printf("Writing data to DFE\n");
	int buffer_size = cell_numbers * sizeof(float);
	WavePropagation_writeLMem(buffer_size, 0, vel);
	printf("Writing a\n");
	WavePropagation_writeLMem(buffer_size, buffer_size, absorb);
	printf("Writing d\n");
	WavePropagation_writeLMem(buffer_size, 2*buffer_size, den);
	printf("Writing 1\n");
	WavePropagation_writeLMem(buffer_size, 3*buffer_size, fields[0]);
	printf("Writing 2\n");
	WavePropagation_writeLMem(buffer_size, 4*buffer_size, fields[1]);
	printf("Writing 3\n");
	WavePropagation_writeLMem(buffer_size, 5*buffer_size, fields[2]);
	printf("Writing src\n");
	WavePropagation_writeLMem((time_steps / burst_size + 1)*burst_size*sizeof(float), 6*buffer_size, src);

//	max_wait(vel_write);
//	max_wait(abs_write);
//	max_wait(den_write);
//	max_wait(one_write);
//	max_wait(two_write);
//	max_wait(three_write);
//	max_wait(sig_write);

	printf("Running Propagation\n");
	WavePropagation(dt*dt/(dx*dx), nx, nz, receiver_depth, sx, sz, time_steps);

	printf("Reading result\n");
	WavePropagation_readLMem(nx*time_steps*sizeof(float), 6*buffer_size + time_steps*sizeof(float), result);

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
