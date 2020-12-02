#include <stdio.h>
#include<locale.h>
float programa1();
char programa2();
float programa3();
float leerVector(float vectorX[10]);
float imprimirVector(float vectorX[10]);
int programa4();
char programa5();
int i, j;
int main(){
	setlocale(LC_ALL, "");
	char seleccion;
	printf("\t\t\t\t\t\t\tELIJA EL POROGRAMA QUE DESEA UTILIZAR\n\n");
	printf("a) Teclea 'a' si desea multiplicar dos números y saber si el resultado es mayor a 150\n");
	printf("b) Teclea 'b' si desea ingresar una cadena de diez carácteres para imprimirlos de forma inversa\n");
	printf("c) Teclea 'c' si desea ingresar dos vectores de 10 elementos y obtener el resultado de su suma\n");
	printf("d) Teclea 'd' si desea ingresar un arreglo de 3x3 y que se imprima su matriz y su matriz transpuesta\n");
	printf("e) Teclea 'e' si desea acceder al sistema de la Universidad para conocer si la colegiatura aumentará o no\n\n");
	scanf("%c",&seleccion);
	switch(seleccion){
		case 'a':
			printf("\n\nUsted ha elegido la opción a)\n");
			programa1();
			break;
		case 'b':
			printf("\n\nUsted ha elegido la opción b)\n");
			programa2();
			break;
		case 'c':
			printf("\n\nUsted ha elegido la opción c)\n");
			programa3();
			break;
		case 'd':
			printf("\n\nUsted ha elegido la opción d)\n");
			programa4();
			break;
		case 'e':
			printf("\n\nUsted ha elegido la opción e)\n");
			programa5();
			break;
		default:
			printf("¡ERROR! Opción inválida");
	}
	return 0;
}
float programa1(){
	float a=0,b=0;
	printf("\n\t\t\t\t\t\t\tINGRESA DOS NÚMEROS Y LOS MULTIPLICAREMOS\n\n\n");
	do{
	printf("Ingresa el primer número:\n");
	scanf("%f",&a);
	printf("Ingresa el segundo número:\n");
	scanf("%f",&b);
	printf("El resultado de la multiplicación es: %.2f\n\n",a*b);
	if (a*b<150)
		printf("Para salir del programa, el resultado de la multiplicación debe ser mayor o igual a 150\n\n");
	}
	while(a*b<150);
}
char programa2(){
    printf("\nIngresa una cadena de 10 carácteres, en caso de que contenga menos de 10 carácteres, teclea espacio para sustituirlos\n\n");
    char cadena[10];
    for (i=0;i<=9;i++){
    	scanf("%c",&cadena[i]);
    }
    printf("\nLa cadena ingresada escrita de forma inversa es:\n\n");
    for (i=9;i>=0;i--){
    	printf("%c",cadena[i]);
    }
}
float leerVector(float vectorX[10]){
	for(i=0;i<10;i++){
		printf("Ingresa el valor %d: ",i+1);
		scanf("%f",&vectorX[i]);
	}
}
float imprimirVector(float vectorX[10]){
	for(i=0;i<9;i++)
		printf("%.2f, ",vectorX[i]);
	if(i==9)
		printf("%.2f}\n",vectorX[i]);
}
float programa3(){
	float vectorA[10], vectorB[10], vectorC[10], acum=0;
	printf("\nIngrese los valores para el vector A\n");
	leerVector(vectorA);
	printf("\nIngrese los valores para el vector B\n");
	leerVector(vectorB);
	for(i=0;i<10;i++)
		vectorC[i]=vectorA[i]+vectorB[i];
	for(i=0;i<10;i++)
		acum=acum+vectorC[i];
	printf("\nLos elementos contenidos en el vector A son {");
	imprimirVector(vectorA);
	printf("Los elementos contenidos en el vector B son {");
	imprimirVector(vectorB);
	printf("Los elementos contenidos en el vector C son {");
	imprimirVector(vectorC);
	printf("La suma de los elementos contenidos en el vector A y el vector B es: %.2f",acum);	
}
int programa4(){
	float arreglo[3][3];
	printf("\n\t\t\t\t\t\t\tIngrese los datos de la matriz de 3x3\n");
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
}
char programa5(){
	char nombres[10][30];
	int aprobados=0;
	float calif[10];
	printf("\n\t\t\t\t\t\t\tBIENVENIDO AL SISTEMA DE LA UNIVERSIDAD");
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
}
