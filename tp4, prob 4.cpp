#include <stdio.h>

int main() {
	int notas[15];
	int frecuencia[11] = {0}; 
	
	for (int i = 0; i < 15; i++) {
		do {
			printf("Ingrese la nota del alumno %d (entre 0 y 10 puntos): ", i + 1);
			scanf("%d", &notas[i]);
		} while (notas[i] < 0 || notas[i] > 10);
		
		frecuencia[notas[i]]++; 
	}
	
	printf("Frecuencia de notas:\n");
	for (int nota = 0; nota <= 10; nota++) {
		printf("Nota %d: %d alumno(s)\n", nota, frecuencia[nota]);
	}
	
	return 0;
}

