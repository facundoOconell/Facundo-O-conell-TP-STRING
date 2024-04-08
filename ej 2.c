//Realiza un programa que cuente cuántas vocales tiene una cadena de
//caracteres ingresada por el usuario.


#include <stdio.h>
#include <stdlib.h>



int main() {
    char cadena[100];
    int vocales = 0;
	int i;


    printf("Ingresa una cadena de caracteres: ");
    scanf("%s", cadena);


    int longitud = strlen(cadena);

    // Cont vocales
    
    for (i = 0; i < longitud; i++) {
        char c = cadena[i];
     
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
    }


    printf("La cadena \"%s\" tiene %d vocales.\n", cadena, vocales);

    return 0;
}

