#include <stdio.h>

float calcularRequiv(float R1, float R2, float R3) {
	return 1/((1/R1)+(1/R2)+(1/R3));
}

int main() {
	float R1, R2, R3;
	
	printf("Ingresa el valor de R1: ");
	scanf("%f", &R1);
	
	printf("Ingresa el valor de R2: ");
	scanf("%f", &R2);
	
	printf("Ingresa el valor de R3: ");
	scanf("%f", &R3);
	
	float Requiv = calcularRequiv(R1, R2, R3);
	
	printf("El valor de Requiv es: %.2f\n", Requiv);
	
	return 0;
}
