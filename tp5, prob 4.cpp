#include <stdio.h>

int obtenerMenor(int num1, int num2, int num3) {
	int menor = num1;
	
	if (num2 < menor) {
		menor = num2;
	}
	
	if (num3 < menor) {
		menor = num3;
	}
	
	return menor;
}

int main() {
	int num1, num2, num3;
	
	printf("Ingresa el primer número entero: ");
	scanf("%d", &num1);
	
	printf("Ingresa el segundo número entero: ");
	scanf("%d", &num2);
	
	printf("Ingresa el tercer número entero: ");
	scanf("%d", &num3);
	
	int menor = obtenerMenor(num1, num2, num3);
	
	
	printf("El número menor es: %d\n", menor);
	
	return 0;
}
