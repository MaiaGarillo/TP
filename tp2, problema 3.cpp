#include <stdio.h>

int main() {
	float num, sum, prom;
	
	printf("Ingrese 10 números reales:\n");
	
	for (int i=0; i<10; i++) {
		printf("Número %d: ", i + 1);
		scanf("%f", &num);
		sum = sum + num;
	}
	
	prom = sum / 10;
	
	printf("El promedio de los números ingresados es: %.2f\n", prom);
	
	return 0;
}
