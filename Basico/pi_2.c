#include <stdio.h>

int main(){
    float n, i;
	float termino, producto;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%f", &n);
	i = 1;
	producto = 1;
    while (i <= n){
		termino = (2*i/(2*i - 1))*(2*i/(2*i + 1));
		producto = producto * termino;
		i = i + 1;
	}
     printf("PI aproximado con %f terminos es: %f\n", n, producto * 2);
    return 0;
}