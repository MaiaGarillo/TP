#include <stdio.h>

int main()
{
	int number, contador = 0; 
	
	for (int i = 0; i < 10; i++) {
		printf("Ingrese el n�mero %d: ", i + 1);
		scanf("%i", &number);
		
		if (number % 3 == 0) {
			contador++;
		}
	}
	
	printf("La cantidad de n�meros divisibles por 3 es: %i\n", contador);
	
	return 0;
}

