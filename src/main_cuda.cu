#include <stdio.h>
#include <cuda.h> // External library that has to be downloaded and installed

#define TILE_SIZE 8 // Might need to be changed due to not always being able to guarantee divisible-by-2 matrices

__global__ void mat_mul_kernel(float *A, float *B, float *C, int N) {

    // Kernel skeleon - TODO


};

int main() {

    // Main function skeleton - TODO

    return 0;
};