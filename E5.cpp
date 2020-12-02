#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int i, j;
	float arreglo[3][3];
	printf("\t\t\t\t\t\t\tIngrese los datos de la matriz de 3x3\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Ingrese el dato correspodiente a la posición [%d,%d]: ",i+1,j+1);
			scanf("%f",&arreglo[i][j]);
		}
	}
	printf("\nLos elementos almacenados en la matriz de 3x3 son:\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %.2f ",arreglo[i][j]);
		}
			printf("\n");
	}
	printf("La matriz transpuesta de 3x3 es:\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %.2f ",arreglo[j][i]);
		}
			printf("\n");
	}
	return 0;
}
