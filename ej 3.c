//Realiza un programa que determine si una cadena de caracteres ingresada
//por el usuario es palíndromo (se lee igual de izquierda a derecha que de
//derecha a izquierda).

#include <stdio.h>
#include <string.h>

int esPalindromo(char cadena[]){
	int longitud = strlen(cadena);
	int i;
	
	for(i=0 ; i < longitud / 2; i++){ //compara hasta la mitad de la cad
 		
		if(cadena[i] != cadena[longitud - i - 1]){
			return 0;
			
		}
		
	}
			return 1;	
}

int main(){
	
	char cadena[100];
	
	printf("Ingrese una cadena de caracteres : ");
	scanf("%s",&cadena);
	
		
	
	
	if(esPalindromo(cadena)){
		
		printf("ES PALINDROMO");
		
	}else{
		
		
		printf("NO ES PALINDROMO");
		
	}
	
	
	
	return 0;
}
