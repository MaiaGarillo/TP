#include <stdio.h>
#include <math.h>

int main() {
	FILE *fp1, *fp2;
	double x, y, h, dydx;
	int i;
	
	fp1 = fopen("seno.txt", "r");
	fp2 = fopen("derivada.txt", "w");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	for (i = 1; i <= 79; i++) {
		fscanf(fp1, "%lf", &y);
		x = i * M_PI / 20.0;
		h = M_PI / 20.0;
		dydx = (y - sin(4 * (x - h))) / h;
		fprintf(fp2, "%lf\n", dydx);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	printf("Los valores de la derivada se han guardado en el archivo 'derivada.txt'.\n");
	
	return 0;
}
