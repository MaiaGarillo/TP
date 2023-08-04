#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVocales(const char *cadena) {
	int contador = 0;
	int longitud = strlen(cadena);
	
	for (int i = 0; i < longitud; i++) {
		char caracter = tolower(cadena[i]);
		if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
			contador++;
		}
	}
	
	return contador;
}

int main() {
	char cadena[100];
	
	
	printf("Ingresa una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	
	int numVocales = contarVocales(cadena);
	
	
	printf("Número de vocales: %d\n", numVocales);
	
	return 0;
}
