#include <stdio.h>

void bubbleSortDescending(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int numeros[10];
	
	
	printf("Ingresa 10 números enteros:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numeros[i]);
	}
	
	
	bubbleSortDescending(numeros, 10);
	
	
	printf("Arreglo ordenado de manera descendente:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	return 0;
}
