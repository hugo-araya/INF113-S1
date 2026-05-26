#include <stdio.h>

// Ejemplo de variables Locales y Globales
// Las variables locales solo existen o tiene vida en el bloqu en el cual
// fueron declaradas.

int main(){
    int x;
    x = 10;
    if (x == 10){
        // int x;
        x = 99;
        printf("x interna %d \n", x);
    }
    printf("x externa %d \n", x);
    return 0;
}