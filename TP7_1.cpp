#include <stdio.h>
#include <math.h>

int main() {
	FILE *fp;
	double x, y;
	int i;
	
	fp = fopen("seno.txt", "w");
	if (fp == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	for (i = 0; i <= 80; i++) {
		x = i * M_PI / 20.0;
		y = sin(2 * x);
		fprintf(fp, "%lf\n", y);
	}
	
	fclose(fp);
	
	printf("Los valores se han guardado 'seno.txt'.\n");
	
	return 0;
}
