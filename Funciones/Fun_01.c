#include <stdio.h>

// Zona de las declaraciones
// Solo se indica el nombre de la fucion con su respectivo
// tipo de datos a retornar y los tipos de datos de los argumentos

float f(float);

int main(){
    float x, y;
    for(x =0; x < 10; x=x+0.1){
        y = f(x); // Invocacion a la funcion
        printf("f(%.2f) = %.1f\n", x, y);
    }
    return 0;
}

// Zona de la implementaciones / Definicion
// En esta zona se escribe el bloque de la funcion

float f(float x1){
    float resultado;
    resultado = 2 * x1 + 1;
    return resultado;
}