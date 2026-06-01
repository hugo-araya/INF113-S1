#include <stdio.h>

int main(){
	int i, n, j, pot = -1, contador=0;
	float termino, suma;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);
	suma = 0;
	i = 0;
    while (i < n){
        pot = pot * (-1);     
        contador++;      
        termino = (float)pot/(2*i + 1);
		suma = suma + termino;
        i++;
    }
    printf("PI aproximado con %d terminos es: %f\n", n, suma * 4);
    printf("Contador: %d\n", contador);
    return 0;
}