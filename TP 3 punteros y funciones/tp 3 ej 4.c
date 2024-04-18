#include <stdio.h>

// Función para copiar un arreglo en otro
void copiarArreglo(int* origen, int* destino, int tamano) {  
	int i;
	for (i = 0; i < tamano; ++i) {
    	
        *(destino + i) = *(origen + i);
        
    }
}

int main() {
	int i;
    int origen[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(origen) / sizeof(origen[0]);
    int destino[tamano];
    
    // Llamando a la función para copiar el arreglo
    copiarArreglo(origen, destino, tamano);
    
    printf("Arreglo copiado:\n");
    for (i = 0; i < tamano; ++i) {
        printf("%d ", origen[i]);
    }
    printf("\n\n");
    
    printf("Arreglo copiado:\n");
    for (i = 0; i < tamano; ++i) {
        printf("%d ", destino[i]);
    }
    printf("\n");
    
    return 0;
}

