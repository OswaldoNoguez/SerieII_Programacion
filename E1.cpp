#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	float a=0,b=0;
	printf("\t\t\t\t\tINGRESA DOS N�MEROS Y LOS MULTIPLICAREMOS\n\n\n");
	do{
	printf("Ingresa el primer n�mero:\n");
	scanf("%f",&a);
	printf("Ingresa el segundo n�mero:\n");
	scanf("%f",&b);
	printf("El resultado de la multiplicaci�n es: %.2f\n\n",a*b);
	if (a*b<150)
		printf("Para salir del programa, el resultado de la multiplicaci�n debe ser mayor o igual a 150\n\n");
	}
	while(a*b<150);
	return 0;
}
