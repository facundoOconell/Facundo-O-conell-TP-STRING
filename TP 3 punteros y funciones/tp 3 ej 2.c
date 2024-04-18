#include <stdio.h>

// Función para encontrar la suma y el promedio de un arreglo
void sumaYPromedio(int* arreglo, int tamano, int* suma, float* promedio) {
    int i;
	*suma = 0;
    for (i = 0; i < tamano; ++i) {
        *suma += arreglo[i];
    }
    *promedio = *suma / tamano;
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); // obtener la cantidad de elementos que hay en el arreglo
    int suma;
    float promedio;
    
    sumaYPromedio(arreglo, tamano, &suma, &promedio);
    
    printf("La suma de los elementos del arreglo es: %d\n", suma);
    printf("El promedio de los elementos del arreglo es: %.2f\n", promedio);
    
    return 0;
}

