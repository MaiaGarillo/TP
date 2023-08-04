#include <stdio.h>

int main() {
	int n = 10;
	int arreglo[10];
	
	printf("Ingrese 10 números enteros:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arreglo[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				int temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
	}
	
	printf("Números ordenados en forma ascendente:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arreglo[i]);
	}
	
	printf("\n");
	
	return 0;
}
