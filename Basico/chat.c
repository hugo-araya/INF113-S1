#include <stdio.h>
int main() {
    int n, i;
    double pi = 1.0, numerador, termino;
    // Pedir al usuario la cantidad de términos
    printf("Ingrese la cantidad de términos para la aproximación de pi: ");
    scanf("%d", &n);
    // Calcular la aproximación usando la fórmula de Wallis
    i = 1;
    while (i <= n) {
        numerador = 2.0 * i;
        termino = (numerador / (numerador - 1)) * (numerador / (numerador + 1));
        pi = pi * termino;
        i++;
    }
    
    pi = pi * 2; // Multiplicar por 2 al final
    // Mostrar el resultado
    printf("Aproximación de pi usando %d términos: %.15f\n", n, pi);
    return 0;
}