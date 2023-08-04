#include <stdio.h>

int main() {
	int num;
	printf("Ingrese un n�mero entero para calcular su factorial: ");
	scanf("%d", &num);
	
	if (num < 0) {
		printf("El factorial no est� definido para n�meros negativos.\n");
	} else {
		int factorial = 1;
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}
		printf("El factorial de %d es: %d\n", num, factorial);
	}
	
	return 0;
}

