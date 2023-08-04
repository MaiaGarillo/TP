#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
	float x = 0, y = 0;
	
	for (int i=0;i<50;i++) {
		x =(4*PI*i)/50;
		y =sin(x)+0.7*cos(2*x)+0.5*sin(3*x);
		printf("x = %f\t y = %f\n", x, y);
	}
	
}
