#include <stdio.h>
#include <string.h>

int main() {
	char cadena[100];
	
	
	printf("Ingresa una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);	
	
	int longitud = strlen(cadena);
	
	printf("Cadena al revés: ");
	for (int i = longitud - 1; i >= 0; i--) {
		printf("%c", cadena[i]);
	}
	printf("\n");
	
	return 0;
}
