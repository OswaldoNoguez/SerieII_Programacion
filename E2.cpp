#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
    int i;
    printf("Ingresa una cadena de 10 carácteres, en caso de que contenga menos de 10 carácteres, teclea espacio para sustituirlos\n\n");
    char cadena[10];
    for (i=0;i<=9;i++){
    	scanf("%c",&cadena[i]);
    }
    printf("\nLa cadena ingresada escrita de forma inversa es:\n\n");
    for (i=9;i>=0;i--){
    	printf("%c",cadena[i]);
    }
	return 0;
}
