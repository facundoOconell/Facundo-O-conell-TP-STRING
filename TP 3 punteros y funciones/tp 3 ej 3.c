#include <stdio.h>

// Función para encontrar el mayor y el menor elemento de un arreglo
void encontrarMayorYMenor(int* arreglo, int tamano, int* mayor, int* menor) {
	
	int i;
    *mayor = arreglo[0]; // Suponemos que el primer elemento es el mayor inicialmente
    *menor = arreglo[0]; // Suponemos que el primer elemento es el menor inicialmente
    for (i = 1; i < tamano; ++i) {
        if (arreglo[i] > *mayor) {
            *mayor = arreglo[i];
        }
        if (arreglo[i] < *menor) {
            *menor = arreglo[i];
        }
    }
}

int main() {
    int arreglo[] = {5, 3, 9, 1, 7};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int mayor, menor;
    
    encontrarMayorYMenor(arreglo, tamano, &mayor, &menor);
    
    printf("El mayor elemento del arreglo es: %d\n", mayor);
    printf("El menor elemento del arreglo es: %d\n", menor);
    
    return 0;
}

