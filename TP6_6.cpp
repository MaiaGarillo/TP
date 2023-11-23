#include <stdio.h>
#include <string.h>

int contar_letra(char letra, char* cadena) {
	int contador = 0;
	int len = strlen(cadena);
	for (int i = 0; i < len; i++) {
		if (cadena[i] == letra) {
			contador++;
		}
	}
	return contador;
}
