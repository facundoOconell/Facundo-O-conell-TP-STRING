#include <stdio.h>


int contarOcurrencias(int* arreglo, int tamano, int elemento);

int main() {

    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 5};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int elemento = 5;
    // Contar las ocurrencias del elemento en el arreglo
    int ocurrencias = contarOcurrencias(arreglo, tamano, elemento);
    // Imprimir el resultado
    printf("El elemento %d aparece %d veces en el arreglo.\n", elemento, ocurrencias);
    return 0;
}

int contarOcurrencias(int* arreglo, int tamano, int elemento){
    int contador = 0;
    int *ptr;
 
    for (ptr = arreglo; ptr < arreglo + tamano; ptr++) {
        if (*ptr == elemento) {
            contador++;
        }
    }
    return contador;
}
