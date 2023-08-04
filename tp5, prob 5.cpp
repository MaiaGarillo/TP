#include <stdio.h>

float calcularValorConDescuento(float precio, float descuento) {
	float porcentaje = descuento / 100.0;
	return precio - (precio * porcentaje);
}

int main() {
	float precio;
	float descuento;
	
	printf("Ingresa el precio de la compra: ");
	scanf("%f", &precio);
	
	printf("Ingresa el porcentaje de descuento: ");
	scanf("%f", &descuento);
	
	
	float valorConDescuento = calcularValorConDescuento(precio, descuento);
	
	
	printf("El valor a pagar con descuento es: %.2f\n", valorConDescuento);
	
	return 0;
}
