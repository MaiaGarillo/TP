#include <stdio.h>

int main() {
	int notas[10] , sumaNotas = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("Ingrese la nota del alumno %d: ", i + 1);
		scanf("%d", &notas[i]);
		sumaNotas += notas[i];
	}
	
	float promedio = (float)sumaNotas / 10;
	
	int encimaPromedio = 0;
	int debajoPromedio = 0;

	for (int i = 0; i < 10; i++) {
		if (notas[i] > promedio) {
			encimaPromedio++;
		} else if (notas[i] < promedio) {
			debajoPromedio++;
		}
	}
	
	printf("El promedio de notas es de: %.2f\n", promedio);
	printf("La cantidad de alumnos por encima del promedio es de: %d\n", encimaPromedio);
	printf("La cantidad de alumnos por debajo del promedio es de: %d\n", debajoPromedio);
	
	return 0;
}
