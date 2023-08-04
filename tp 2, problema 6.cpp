#include <stdio.h>

int main() {
	int n;
	printf("Ingrese el valor de n para calcular el en�simo t�rmino de la sucesi�n de Fibonacci: ");
	scanf("%d", &n);
	
	if (n < 1) {
		printf("El t�rmino %d no est� definido en la sucesi�n de Fibonacci.\n", n);
	} else {
		int a = 1, b = 1, c;
		if (n == 1 || n == 2) {
			c = 1; 
		} else {
			for (int i = 3; i <= n; i++) {
				c = a + b;
				a = b;
				b = c;
			}
		}
		printf("El t�rmino %d de la sucesi�n de Fibonacci es: %d\n", n, c);
	}
	
	return 0;
}
