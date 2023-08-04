#include <stdio.h>

int main()
{
	int number, contador = 0; 
	
	for (int i = 0; i < 10; i++) {
		printf("Ingrese el número %d: ", i + 1);
		scanf("%i", &number);
		
		if (number % 3 == 0) {
			contador++;
		}
	}
	
	printf("La cantidad de números divisibles por 3 es: %i\n", contador);
	
	return 0;
}

