#include <stdio.h>
#include <math.h>

int main() {
	float  a, b, c, d, x1, x2; 
	
	printf("Ingrese el coeficiente 'a': ");
	scanf("%f", &a);
	
	printf("Ingrese el coeficiente 'b': ");
	scanf("%f", &b);
	
	printf("Ingrese el coeficiente 'c': ");
	scanf("%f", &c);
	
	d = (b * b) - (4 * a * c);
	
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("Las raíces son:\n");
		printf("x1: %.2f\n", x1);
		printf("x2: %.2f\n", x2);
	} else if (d == 0) {
		x1 = x2 = -b / (2 * a);
		printf("Las raíces son :\n");
		printf("Raíz: %.2f\n", x1);
	} else {
		printf("La ecuación tiene soluciones complejas.\n");
	}
	
	return 0;
}
