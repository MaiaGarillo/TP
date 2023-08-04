#include <stdio.h>
#include <math.h>


int main() {
	float x1;
	float x2;
	float y;
	printf("ingrese el limite menor: ");
	scanf("%f",&x1);
	printf("ingrese el limite mayor: ");
	scanf("%f",&x2);
	
	
	y=0.5*(x2-(1/sin(2*x2)))-0.5*(x1-(1/sin(2*x1)));
	
	printf ("\n la integral definida es: %f",y);
	return 0;
}
