#include <stdio.h>
#include <math.h>
#define pi 3.14
#define h 4*pi/50

int main() {
	float x=0;
	float y;
	float g;
	int i;
	for(i=0; i<50; i++){
		x = x+h;
		y = sin(x);
		g = cos (x);
		printf ("\n y = %f", y);
		printf (" x = %f", x);
		printf (" Derivada = %f", g);
	}
	return 0;
}
