#include <stdio.h>

int main() {
	int n;
	printf("Ingrese el valor de n para calcular el enésimo término de la sucesión de Fibonacci: ");
	scanf("%d", &n);
	
	if (n < 1) {
		printf("El término %d no está definido en la sucesión de Fibonacci.\n", n);
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
		printf("El término %d de la sucesión de Fibonacci es: %d\n", n, c);
	}
	
	return 0;
}
