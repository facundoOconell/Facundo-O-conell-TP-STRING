#include <stdio.h>
#include <string.h>

int main(){

    char palabras[5][100];
	int i;


    printf("Ingrese 5 palabras:\n");
    for (i = 0; i < 5; ++i) {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }

    int longitudMaxima = strlen(palabras[0]);
    int indiceMaximo = 0;
    for (i = 1; i < 5; ++i) {
        int longitudActual = strlen(palabras[i]);
        if (longitudActual > longitudMaxima) {
            longitudMaxima = longitudActual;
            indiceMaximo = i;
        }
    }

    printf("La cadena mas larga es: %s\n", palabras[indiceMaximo]);

    return 0;
	
	
}
	
	
	
	

