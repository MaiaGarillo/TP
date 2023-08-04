#include <stdio.h>

#define NUM_ELEMENTOS 10

int main() {
	float numeros[NUM_ELEMENTOS];
	float suma_par = 0.0;
	float suma_impar = 0.0;
	int num_elementos_par = 0;
	int num_elementos_impar = 0;
	
	
	printf("Ingrese %d numeros reales:\n", NUM_ELEMENTOS);
	for (int i = 0; i < NUM_ELEMENTOS; i++) {
		scanf("%f", &numeros[i]);
	}
	

	for (int i = 0; i < NUM_ELEMENTOS; i++) {
		if (i % 2 == 0) {
			suma_par += numeros[i];
			num_elementos_par++;
		} else {
			suma_impar += numeros[i];
			num_elementos_impar++;
		}
	}
	
	
	float promedio_par = suma_par / num_elementos_par;
	float promedio_impar = suma_impar / num_elementos_impar;
	
	
	printf("Suma de elementos de indice par: %.2f\n", suma_par);
	printf("Promedio de elementos de indice par: %.2f\n", promedio_par);
	printf("Suma de elementos de indice impar: %.2f\n", suma_impar);
	printf("Promedio de elementos de indice impar: %.2f\n", promedio_impar);
	
	return 0;
}

