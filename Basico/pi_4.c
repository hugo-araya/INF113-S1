#include <stdio.h>

int main(){
	int i, iteracion, j, pot = -1;
	float termino, suma;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
	suma = 0;
	i = 0;
    while (i < iteracion){
        pot = pot * (-1);      
        termino = pot/(2.0*i + 1);
		suma = suma + termino;
        i++;
    }
    printf("PI aproximado con %d terminos es: %f\n", iteracion, suma * 4);
    return 0;
}