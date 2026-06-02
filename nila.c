#include <stdio.h>

int main(){
	int i, iteracion, signo = -1;
	float termino, pi_n;
    int t1 = 2, t2 = 3, t3 = 4;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
	pi_n = 3;
	i = 0;
    while (i < iteracion){
        signo = signo * (-1);      
        termino = signo* 4.0/(t1*t2*t3);
		pi_n = pi_n + termino;
        i++;
        t1 = t1 + 2;
        t2 = t2 + 2;
        t3 = t3 + 2;
    }
    printf("Nila\t\tPI aproximado con %d iteraciones es: %f\n", iteracion, pi_n);
    return 0;
}