#include <stdio.h>
#include <math.h>

int main() {
	FILE *fp;
	int i, n = 20;
	double x, sum = 0, mean, mse = 0, rmse;
	
	fp = fopen("muestra.txt", "r");
	if (fp == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	for (i = 0; i < n; i++) {
		fscanf(fp, "%lf", &x);
		sum += x;
		mse += pow(x - sum / n, 2);
	}
	
	mean = sum / n;
	rmse = sqrt(mse / n);
	
	printf("El promedio de los valores de muestra es: %lf\n", mean);
	printf("El valor cuadrático medio de error es: %lf\n", rmse);
	
	fclose(fp);
	
	return 0;
}
