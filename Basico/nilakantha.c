#include <stdio.h>

int main(){
	int i, iteracion, signo = -1;
	float termino, pi_ap, t1, t2, t3;
	printf("Ingrese iteraciones: ");
	scanf("%d", &iteracion);
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
	printf("Pi aproximado con %d iteraciones es: %f\n", iteracion, pi_ap);
	return 0;
}
		
