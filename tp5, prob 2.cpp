#include <stdio.h>
#include <math.h>

void calcularRaices(float a, float b, float c, float *raiz1, float *raiz2) {
	float discriminante = b * b - 4 * a * c;
	
	if (discriminante >= 0) {
		*raiz1 = (-b + sqrt(discriminante)) / (2 * a);
		*raiz2 = (-b - sqrt(discriminante)) / (2 * a);
	} else {
		//soluciones complejas
		*raiz1 = *raiz2 = NAN ;
	}
}

int main() {
	float a, b, c;
	float raiz1, raiz2;
	int seleccion;
	

	printf("Ingresa el coeficiente a: ");
	scanf("%f", &a);
	
	printf("Ingresa el coeficiente b: ");
	scanf("%f", &b);
	
	printf("Ingresa el coeficiente c: ");
	scanf("%f", &c);
	

	calcularRaices(a, b, c, &raiz1, &raiz2);
	
	
	printf("Selecciona una raíz (1 o 2): ");
	scanf("%d", &seleccion);
	
	
	if (seleccion == 1) {
		printf("La raíz seleccionada es: %.2f\n", raiz1);
	} else if (seleccion == 2) {
		printf("La raíz seleccionada es: %.2f\n", raiz2);
	} else {
		printf("Selección inválida. Debes elegir 1 o 2.\n");
	}
	
	return 0;
}
