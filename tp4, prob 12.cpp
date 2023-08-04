#include <stdio.h>

void encriptar_cadena(char* cadena) {
	while (*cadena) {
		*cadena += 3;
		cadena++;
	}
}

int main() {
	char cadena[100];
	
	printf("Ingresa una cadena: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	encriptar_cadena(cadena);
	
	printf("Cadena encriptada: %s\n", cadena);
	
	return 0;
}
