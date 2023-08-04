#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main() {
	float radio;
	printf("Ingrese el radio del círculo o la esfera: ");
	scanf("%f", &radio);
	
	char opcion;
	printf("Elija una opción de cálculo:\n");
	printf("(a) - Cálculo de la longitud de la circunferencia.\n");
	printf("(b) - Cálculo del área del círculo.\n");
	printf("(c) - Cálculo del volumen de la esfera.\n");
	printf("Ingrese la opción elegida: ");
	scanf(" %c", &opcion);
	
	if (opcion == 'a' || opcion == 'A') {
		float longitud_circunferencia = 2 * PI * radio;
		printf("La longitud de la circunferencia es: %.2f\n", longitud_circunferencia);
	} else if (opcion == 'b' || opcion == 'B') {
		float area_circulo = PI * radio * radio;
		printf("El área del círculo es: %.2f\n", area_circulo);
	} else if (opcion == 'c' || opcion == 'C') {
		float volumen_esfera = (4.0 / 3.0) * PI * pow(radio, 3);
		printf("El volumen de la esfera es: %.2f\n", volumen_esfera);
	} else {
		printf("Opción inválida. Por favor, elija una opción válida (a, b o c).\n");
	}
	
	return 0;
}

