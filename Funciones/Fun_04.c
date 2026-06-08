#include <stdio.h>

float g(float);
float f(float);

int main(){
    float x, y;
    x = 2.5;float g(float);
float f(float);
    y = g(f(x)); // Invocacion a la funcion
    printf("g(f(%.2f)) = %.1f\n", x, y);
    return 0;
}


float g(float x1){
    float resultado;
    resultado = f(x1) * f(x1);
    return resultado;
}

float f(float x1){
    float resultado;
    resultado = 2 * x1 + 1;
    return resultado;
}