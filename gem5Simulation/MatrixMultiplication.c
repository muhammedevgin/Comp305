#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 64

// Matrix multiplication: C = A * B
void matrix_multiply(int A[][N], int B[][N], int C[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
// Seed random number generator
    srand(time(0));

// Initialize matrices
    int A[N][N];
    int B[N][N];
    int C[N][N];

// Generate random values for matrices A and B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

// Perform matrix multiplication
    matrix_multiply(A, B, C);


    return 0;
}
