#include <stdio.h>

int main(){
	int muestra[5],t;
	int suma=0;
	float promedio;
	
	
	for(t=0;t<5;t++){
		printf("ingrese el valor para muestra[%d]\n",t);
		scanf("%d",&muestra[t]);
		suma=suma+muestra[t];
	}	
	promedio=suma/5;
	
	printf ("el promedio es %f\n",promedio);
	return 0;
}
