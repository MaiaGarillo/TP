#include <stdio.h>


unsigned long long int factorial(int num) {
	if (num == 0 || num == 1) {
		return 1; // El factorial de 0 y 1 es 1
	} else {
		unsigned long long int resultado = 1;
		for (int i = 2; i <= num; i++) {
			resultado *= i;
		}
		return resultado;
	}
}

int main() {
	int num;
	printf("Ingrese un número entero: ");
	scanf("%d", &num);
	
	if (num < 0) {
		printf("El factorial no está definido para números negativos.\n");
	} else {
		unsigned long long int fact = factorial(num);
		printf("El factorial %d es: %llu\n", num, fact);
	}
	
	return 0;
}
