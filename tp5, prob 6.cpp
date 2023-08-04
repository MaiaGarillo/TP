#include <stdio.h>
#define PI 3.141592

float calcularLongitudCircunferencia(float radio) {
	return 2 * PI * radio;
}

float calcularAreaCirculo(float radio) {
	return PI * radio * radio;
}

float calcularVolumenEsfera(float radio) {
	return (4.0 / 3.0) * PI * radio * radio * radio;
}

float calcularPropiedad(float radio, int opcion) {
	switch (opcion) {
	case 1:
		return calcularLongitudCircunferencia(radio);
	case 2:
		return calcularAreaCirculo(radio);
	case 3:
		return calcularVolumenEsfera(radio);
	default:
		return -1.0; 
	}
}

int main() {
	float radio;
	int opcion;
	
	printf("Ingresa el radio: ");
	scanf("%f", &radio);
	
	printf("Selecciona una opción:\n");
	printf("1. Calcular longitud de la circunferencia.\n");
	printf("2. Calcular área del círculo.\n");
	printf("3. Calcular volumen de la esfera.\n");
	printf("Opción: ");
	scanf("%d", &opcion);
	
	float resultado = calcularPropiedad(radio, opcion);
	

	if (resultado >= 0) {
		printf("El resultado es: %.2f\n", resultado);
	} else {
		printf("Opción inválida. Debes elegir 1, 2 o 3.\n");
	}
	
	return 0;
}

