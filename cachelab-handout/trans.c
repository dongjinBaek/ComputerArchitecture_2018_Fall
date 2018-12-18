/* 
 * trans.c - Matrix transpose B = A^T
 *
 * Each transpose function must have a prototype of the form:
 * void trans(int M, int N, int A[N][M], int B[M][N]);
 *
 * A transpose function is evaluated by counting the number of misses
 * on a 1KB direct mapped cache with a block size of 32 bytes.
 */ 
#include <stdio.h>
#include "cachelab.h"

int is_transpose(int M, int N, int A[N][M], int B[M][N]);

/* 
 * transpose_submit - This is the solution transpose function that you
 *     will be graded on for Part B of the assignment. Do not change
 *     the description string "Transpose submission", as the driver
 *     searches for that string to identify the transpose function to
 *     be graded. 
 */
char transpose_submit_desc[] = "Transpose submission";
void transpose_submit(int M, int N, int A[N][M], int B[M][N])
{
	int i, j,  I, J;
	int a, b, c,   x, y, z, w;
	if (N == 64 || N == 32) {
		for (I = 0; I < N; I += 8) {
			for (J = 0; J < M; J += 8) {
				x = A[I][J+4], y = A[I][J+5], z = A[I][J+6], w = A[I][J+7];
				for (i = I; i < I + 8; ++i) {
					a = A[i][J+0]; b = A[i][J+1]; c = A[i][J+2]; B[J+3][i] = A[i][J+3];
					B[J+0][i] = a; B[J+1][i] = b; B[J+2][i] = c; 
				}
				for (i = I + 7; i > I; --i) {
					a = A[i][J+4]; b = A[i][J+5]; c = A[i][J+6]; B[J+7][i] = A[i][J+7]; 
					B[J+4][i] = a; B[J+5][i] = b; B[J+6][i] = c; 
				}
				B[J+4][I] = x; B[J+5][I] = y; B[J+6][I] = z; B[J+7][I] = w;
			}
		}
	} else {
		for (I = 0; I < N; I += 16) {
			for (J = 0; J < M; J += 16) {
				for (i = I; i < N && i < I + 16; ++i) {
					for (j = J; j < M && j < J + 16; ++j) {
						B[j][i] = A[i][j];
					}
				}
			}
		}
	}
}

/* 
 * You can define additional transpose functions below. We've defined
 * a simple one below to help you get started. 
 */ 

/* 
 * trans - A simple baseline transpose function, not optimized for the cache.
 */
char trans_desc[] = "Simple row-wise scan transpose";
void trans(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, tmp;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }    

}

/*
 * registerFunctions - This function registers your transpose
 *     functions with the driver.  At runtime, the driver will
 *     evaluate each of the registered functions and summarize their
 *     performance. This is a handy way to experiment with different
 *     transpose strategies.
 */
void registerFunctions()
{
    /* Register your solution function */
    registerTransFunction(transpose_submit, transpose_submit_desc); 

    /* Register any additional transpose functions */
    registerTransFunction(trans, trans_desc); 

}

/* 
 * is_transpose - This helper function checks if B is the transpose of
 *     A. You can check the correctness of your transpose by calling
 *     it before returning from the transpose function.
 */
int is_transpose(int M, int N, int A[N][M], int B[M][N])
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; ++j) {
            if (A[i][j] != B[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

