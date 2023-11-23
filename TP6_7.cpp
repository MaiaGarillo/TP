#include <stdio.h>

void multiplicar_matrices(double a[3][3], double b[3][3], double resultado[3][3]) {
	int i, j, k;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			resultado[i][j] = 0;
			for (k = 0; k < 3; k++) {
				resultado[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
