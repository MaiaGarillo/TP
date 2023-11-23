#include <stdio.h>

int intercambiar(int x1, int x2) {
	int aux;
	aux = x1;
	x1 = x2;
	x2 = aux;
	return x1;
}

int main() {
	int X1 = 10;
	int X2 = 20;
	int resultado;
	resultado = intercambiar(X1, X2);
	printf("%d %d\n", X1, X2);
	printf("%d %d\n", resultado, resultado);
}

