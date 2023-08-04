#include <stdio.h>
#include <math.h>

int main() {
	float S[36] = {0};
	float A[36] = {0};
	float P[34] = {0};
	
	float x = 0;
	float y = 0;
	
	printf("valores de x\t" "valores de la funcion\t" "Promedio\n");
	
	for (int i = 0; i < 36; i++) {
		A[i] = x;
		y = sin(x);
		S[i] = y;
		x = x + 0.174533;
	}
	
	for (int i = 0; i < 34; i++) {
		P[i] = (S[i] + S[i + 1] + S[i + 2]) / 3.0;
		printf("%f\t%f\t%f\n", A[i], S[i], P[i]);
	}
	
	return 0;
}
