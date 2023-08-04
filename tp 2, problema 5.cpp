#include <stdio.h>

int main() {
	int n, num, max, min;
	
	printf("Ingrese la cantidad de números que quiere comparar: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("La cantidad de números tiene ser mayor que cero.\n");
		return 1;
	}

	printf("Ingrese el número 1: ");
	scanf("%d", &num);
	max = min = num;
	
	for (int i = 2; i <= n; i++) {
		printf("Ingrese el número %d: ", i);
		scanf("%d", &num);
		
		if (num > max) {
			max = num;
		}
		
		if (num < min) {
			min = num;
		}
	}
	
	printf("El máximo de los números ingresados es: %d\n", max);
	printf("El mínimo de los números ingresados es: %d\n", min);
	
	return 0;
}
