#include <stdio.h>
#include <math.h>


float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2) {
	float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
	return distancia;
}

int main() {
	float x1, y1, z1, x2, y2, z2;
	
	
	printf("Ingresa las coordenadas x del primer punto: ");
	scanf("%f", &x1);
	
	printf("Ingresa las coordenadas y del primer punto: ");
	scanf("%f", &y1);
	
	printf("Ingresa las coordenadas z del primer punto: ");
	scanf("%f", &z1);
	

	printf("Ingresa las coordenadas x del segundo punto: ");
	scanf("%f", &x2);
	
	printf("Ingresa las coordenadas y del segundo punto: ");
	scanf("%f", &y2);
	
	printf("Ingresa las coordenadas z del segundo punto: ");
	scanf("%f", &z2);
	
	
	float distancia = calcularDistancia(x1, y1, z1, x2, y2, z2);
	

	printf("La distancia entre los dos puntos es: %.2f\n", distancia);
	
	return 0;
}
