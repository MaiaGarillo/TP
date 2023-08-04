#include <stdio.h>
#include <stdbool.h>

int main() {
	int n = 20;
	int numerosPrimos[20];
	int contador = 0;
	int numeroActual = 2;
	
	while (contador < n) {
		bool esPrimo = true;
		
		for (int i = 2; i * i <= numeroActual; i++) {
			if (numeroActual % i == 0) {
				esPrimo = false;
				break;
			}
		}
		
		if (esPrimo) {
			numerosPrimos[contador] = numeroActual;
			contador++;
		}
		numeroActual++;
	}
	
	printf("Los primeros 20 números primos son:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", numerosPrimos[i]);
	}
	printf("\n");
	
	return 0;
}
