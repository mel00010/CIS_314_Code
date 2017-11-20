#include <stdio.h>

#define M 5
typedef int Marray_t[M][M];

void transpose(Marray_t A) {
	int* m = (int*) A;
	int i, j = 0;
	int* x;
	int* y;
	for (i = 0; i < M; i++) {
		for (j = 0, x = m + i * M, y = m + i; j < i; j++, x++, y += M) {
			int t = *(x);
			*(x) = *(y);
			*(y) = t;
		}
	}
}
void printMatrix(Marray_t matrix) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	Marray_t A = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 };
	printMatrix(A);
	transpose(A);
	printMatrix(A);
	transpose(A);
	printMatrix(A);
}
