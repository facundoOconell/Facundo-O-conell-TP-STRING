#include <stdio.h>

int x=5, y=10;
void intercambio(int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}


int main(){

printf("ANTES DEL INTERCAMBIO : x = %d, y = %d",x,y);

intercambio(&x, &y);

printf("\n\nDESPUES DEL INTERCAMBIO : x = %d, y = %d",x,y);	
	
}
