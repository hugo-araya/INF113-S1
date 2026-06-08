#include <stdio.h>

float leibniz(int);
float nila(int);
float bailey(int);

int main(){
    int iteracion;
    float PI_1, PI_2, PI_3;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &iteracion);
    PI_1 = leibniz(iteracion);
    PI_2 = nila(iteracion);
    PI_3 = bailey(iteracion);
    printf("LEIBNIZ\t\tPI aproximado con %d iteraciones es: %f\n", iteracion, PI_1);
    printf("NILAKANTHA\tPI aproximado con %d iteraciones es: %f\n", iteracion, PI_2);
    printf("BAILEY\t\tPI aproximado con %d iteraciones es: %f\n", iteracion, PI_3);
    return 0;
}

float leibniz(int iteracion){
    float suma = 0, termino;
	int i = 0;
    int signo = -1;
    while (i < iteracion){
        signo = signo * (-1);      
        termino = signo/(2.0*i + 1);
		suma = suma + termino;
        i++;
    }
    return suma * 4;
}

float nila(int iteracion){
    float termino, pi_ap, t1, t2, t3;
    int i, signo = -1;
    pi_ap = 3;
	t1 = 2;
	t2 = 3;
	t3 = 4;
	i = 0;
	while (i < iteracion){
		signo = signo * (-1);
		termino = 4.0/(t1 * t2 * t3);
		pi_ap = pi_ap + signo*termino;
		i = i + 1;
		t1 = t1 + 2;
		t2 = t2 + 2;
		t3 = t3 + 2;
	}
    return pi_ap;
}

float bailey(int iteracion){
    float pi_b = 0, termino;
	int e_16 = 1, i;
	i = 0;
	while (i < iteracion){
		termino = (1.0/e_16)*((4.0/(8*i+1))-(2.0/(8*i+4))-(1.0/(8*i+5))-(1.0/(8*i+6)));
		pi_b = pi_b + termino;
		e_16 = e_16 * 16;
		i = i + 1;
    }
    return pi_b;
}