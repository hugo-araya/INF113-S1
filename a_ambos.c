#include <stdio.h>

int main(){
	int i, iteracion, signo = -1;
	float termino_l, termino_n, pi_l, pi_n,  t1, t2, t3;;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
	pi_l = 0;
    pi_n = 3;
    t1 = 2;
	t2 = 3;
	t3 = 4;
	i = 0;
    while (i < iteracion){
        signo = signo * (-1);      
        termino_l = 1/(2.0*i + 1);
		pi_l = pi_l + signo * termino_l;
        termino_n = 4.0/(t1 * t2 * t3);
		pi_n = pi_n + signo * termino_n;
        i++;
        t1 = t1 + 2;
		t2 = t2 + 2;
		t3 = t3 + 2;
    }
    printf("LEIBNIZ\t\tPI aproximado con %d iteraciones es: %f\n", iteracion, pi_l * 4);
    printf("NILAKANTHA\tPI aproximado con %d iteraciones es: %f\n", iteracion, pi_n);
    return 0;
}