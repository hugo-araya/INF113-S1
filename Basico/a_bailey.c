#include <stdio.h>
#include <math.h>

int main(){
	int i, iteracion, e_16;
	float termino, pi_b;
    printf("Cantidad de iteraciones: ");
	scanf("%d", &iteracion);
	pi_b = 0;
	e_16 = 1;
	i = 0;
	while (i < iteracion){
		termino = (1.0/e_16)*((4.0/(8*i+1))-(2.0/(8*i+4))-(1.0/(8*i+5))-(1.0/(8*i+6)));
		pi_b = pi_b + termino;
		e_16 = e_16 * 16;
		i = i + 1;
    }
    if (isinf(pi_b)) {
        printf("El cálculo resultó en infinito.\n");
    }
    else{
	    printf("Aproximacion: %f\n",pi_b);
    }
    return 0;
}
