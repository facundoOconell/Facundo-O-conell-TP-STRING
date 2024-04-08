//Realiza un programa que reemplace todas las apariciones de un carácter
//en una cadena de caracteres ingresada por el usuario por otro carácter
//también ingresado por el usuario.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reemplazarCaracter(char cadena[], char cBuscado, char nCaracter){
	int i;
	int longitud = strlen(cadena);
	
	
	for(i=0; i < longitud; i++){
		
		if(cadena[i] == cBuscado){
			
			cadena[i] = nCaracter;
			
		}
		
	}
	
	
}



int main(){
	
char cadena[100];
char cBuscado;
char nCaracter;
	
	printf("Ingrese una cadena de caracteres : ");
	scanf("%s",&cadena);
	
	fflush(stdin);

	printf("\nIngresa el caracter que deseas reemplazar : ");
	scanf("%c",&cBuscado);
	
	fflush(stdin);

	
	printf("\nIngresa el nuevo caracter : ");
	scanf("%c",&nCaracter);
	
	
	reemplazarCaracter(cadena,cBuscado,nCaracter);
	
	
	printf("\nLa cadena modificada es %s",cadena);

	
	
}


	
	

