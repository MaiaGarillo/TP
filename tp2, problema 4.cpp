#include <stdio.h>

int main() {
	int num;
	printf("Ingrese un número entero para calcular su factorial: ");
	scanf("%d", &num);
	
	if (num < 0) {
		printf("El factorial no está definido para números negativos.\n");
	} else {
		int factorial = 1;
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}
		printf("El factorial de %d es: %d\n", num, factorial);
	}
	
	return 0;
}

