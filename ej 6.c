#include <stdio.h>
#include <string.h>

// Función para verificar si dos cadenas son anagramas
int sonAnagramas(char cadena1[], char cadena2[]) {
    int cuenta1[256] = {0};
    int cuenta2[256] = {0};
    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);

    // Si las longitudes de las cadenas son diferentes, no pueden ser anagramas
    if (longitud1 != longitud2){
	
        return 0;

}

int i;

    // Contar la frecuencia de cada carácter en ambas cadenas
    for (i = 0; i < longitud1; i++) {
        cuenta1[(int)cadena1[i]]++;
        cuenta2[(int)cadena2[i]]++;
    }

    // Verificar si las frecuencias son iguales
    for (i = 0; i < 256; i++) {
        if (cuenta1[i] != cuenta2[i])
            return 0;
    }

    return 1;
}

int main() {
    char cadena1[100], cadena2[100];

    // Pedir al usuario que ingrese las cadenas
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    // Verificar si son anagramas
    if (sonAnagramas(cadena1, cadena2))
        printf("SON ANAGRAMAS\n");
    else
        printf("NO SON ANAGRAMAS...\n");

    return 0;
}

