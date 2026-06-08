#include <stdio.h>

int main(){
	int i, iteracion, signo = -1;
	float termino, suma;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
	suma = 0;
	i = 0;
    while (i < iteracion){
        signo = signo * (-1);      
        termino = signo/(2.0*i + 1);
		suma = suma + termino;
        i++;
    }
    printf("LEIBNIZ\t\tPI aproximado con %d iteraciones es: %f\n", iteracion, suma * 4);
    return 0;
}