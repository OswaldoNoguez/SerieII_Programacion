#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	char nombres[10][30];
	int i, aprobados=0;
	float calif[10];
	printf("\t\t\t\t\t\t\tBIENVENIDO AL SISTEMA DE LA UNIVERSIDAD");
	for(i=0;i<=9;i++){
		printf("\nPor favor, ingresa el nombre del alumno %d: ", i+1);
		scanf("%s",&nombres[i]);	
		printf("Por favor, ingrese la calificación que obtuvo: ");
		do{
			scanf("%f",&calif[i]);
			if (calif[i]<0 or calif[i]>10){
				printf("Por favor ingrese una calificación valida: ");
			}
		}
		while (calif[i]<0 or calif[i]>10);
	}
	printf("\nLos alumnos aprobados son:\n");
	for(i=0;i<=9;i++){
		if (calif[i]>=6){
			printf("%s\n",nombres[i]);
			aprobados++;
		}
	}
	if (aprobados==0)
		printf("No hubo alumnos aprobados\n");
	printf("La cantidad de reprobados es %d\n", 10-aprobados);
	if (aprobados>8)
		printf("La cantidad de aprobados es %d y por lo tanto la Universidad sera capaz de aumentar la colegiatura\n",aprobados);
	else 
		printf("La cantidad de aprobados es %d y por lo tanto la colegiatura de la Universidad no subirá\n", aprobados);
	return 0;
}
