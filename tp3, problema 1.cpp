#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main() {
	float radio;
	printf("Ingrese el radio del c�rculo o la esfera: ");
	scanf("%f", &radio);
	
	char opcion;
	printf("Elija una opci�n de c�lculo:\n");
	printf("(a) - C�lculo de la longitud de la circunferencia.\n");
	printf("(b) - C�lculo del �rea del c�rculo.\n");
	printf("(c) - C�lculo del volumen de la esfera.\n");
	printf("Ingrese la opci�n elegida: ");
	scanf(" %c", &opcion);
	
	if (opcion == 'a' || opcion == 'A') {
		float longitud_circunferencia = 2 * PI * radio;
		printf("La longitud de la circunferencia es: %.2f\n", longitud_circunferencia);
	} else if (opcion == 'b' || opcion == 'B') {
		float area_circulo = PI * radio * radio;
		printf("El �rea del c�rculo es: %.2f\n", area_circulo);
	} else if (opcion == 'c' || opcion == 'C') {
		float volumen_esfera = (4.0 / 3.0) * PI * pow(radio, 3);
		printf("El volumen de la esfera es: %.2f\n", volumen_esfera);
	} else {
		printf("Opci�n inv�lida. Por favor, elija una opci�n v�lida (a, b o c).\n");
	}
	
	return 0;
}

