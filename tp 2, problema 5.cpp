#include <stdio.h>

int main() {
	int n, num, max, min;
	
	printf("Ingrese la cantidad de n�meros que quiere comparar: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("La cantidad de n�meros tiene ser mayor que cero.\n");
		return 1;
	}

	printf("Ingrese el n�mero 1: ");
	scanf("%d", &num);
	max = min = num;
	
	for (int i = 2; i <= n; i++) {
		printf("Ingrese el n�mero %d: ", i);
		scanf("%d", &num);
		
		if (num > max) {
			max = num;
		}
		
		if (num < min) {
			min = num;
		}
	}
	
	printf("El m�ximo de los n�meros ingresados es: %d\n", max);
	printf("El m�nimo de los n�meros ingresados es: %d\n", min);
	
	return 0;
}
