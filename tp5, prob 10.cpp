#include <stdio.h>


int esBisiesto(int anio) {
	return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}


int calcularDiaDelAnio(int dia, int mes, int anio) {
	int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int numDia = 0;
	
	
	if (esBisiesto(anio)) {
		diasPorMes[2] = 29;
	}
	
	
	for (int i = 1; i < mes; i++) {
		numDia += diasPorMes[i];
	}
	
	
	numDia += dia;
	
	return numDia;
}

int main() {
	int dia, mes, anio;
	
	
	printf("Ingresa el día: ");
	scanf("%d", &dia);
	
	printf("Ingresa el mes: ");
	scanf("%d", &mes);
	
	printf("Ingresa el año: ");
	scanf("%d", &anio);
	
	
	int numeroDiaAnio = calcularDiaDelAnio(dia, mes, anio);
	
	/
	printf("El número de día del año es: %d\n", numeroDiaAnio);
	
	return 0;
}
