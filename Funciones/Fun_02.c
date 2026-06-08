#include <stdio.h>

// Zona de las declaraciones
// Solo se indica el nombre de la fucion con su respectivo
// tipo de datos a retornar y los tipos de datos de los argumentos

float f(float);
float g(float);

int main(){
    float x, y;
    x = 2.5;
    y = g(f(x)); // Invocacion a la funcion
    printf("g(f(%.2f)) = %.1f\n", x, y);
    return 0;
}

// Zona de la implementaciones / Definicion
// En esta zona se escribe el bloque de la funcion

float f(float x1){
    float resultado;
    resultado = 2 * x1 + 1;
    return resultado;
}

float g(float x1){
    float resultado;
    resultado = f(x1) * f(x1);
    return resultado;
}