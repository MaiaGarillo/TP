#include <stdio.h>
#include <math.h>
int main(){
	
	float S[36]={0};
	float A[36]={0};
	float x=0;
	float y=0;
	
	printf("valores de x\t" "valores de la funcion\n");
	
	for(int i=0;i<36;i++){
		
		A[i]=x;
		y=sin(x);
		S[i]=y;
		x=x+0.174533; //equivale a 10 grados
		printf("%f\t" "%f\n",A[i],S[i]);
		
	}
	
}
	
