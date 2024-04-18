#include <stdio.h>
#include <string.h>


void concatenarCadenas(const char* cadena1, const char* cadena2, char* resultado);

int main() {

    const char* cadena1 = "Hola ";
    const char* cadena2 = "soy facu";

    int longitud1 = strlen(cadena1);
    
    int longitud2 = strlen(cadena2);

    char resultado[longitud1 + longitud2]; 

    concatenarCadenas(cadena1, cadena2, resultado);
  
    printf("%s\n", resultado);
    return 0;
}

void concatenarCadenas(const char* cadena1, const char* cadena2, char* resultado) {

    while (*cadena1) {
        *resultado = *cadena1;
        cadena1++;
        resultado++;
    }

    while (*cadena2) {
        *resultado = *cadena2;
        cadena2++;
        resultado++;
    }
}



