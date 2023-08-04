#include <stdio.h>

float calcularPotencia(float base, int exponente) 
{
	float resultado = 1.0;
	
	if (exponente >= 0) {
		for (int i = 0; i < exponente; i++) {
			resultado *= base;
		}
	} else {
		for (int i = 0; i > exponente; i--) {
			resultado /= base;
		}
	}
	
	return resultado;
}

int main() {
	float base;
	int exponente;
	
	printf("Ingresa la base: ");
	scanf("%f", &base);
	
	printf("Ingresa el exponente: ");
	scanf("%d", &exponente);
	
	float resultado = calcularPotencia(base, exponente);
	
	printf("El resultado de %.2f elevado a la potencia %d es: %.2f\n", base, exponente, resultado);
	
	return 0;
}
