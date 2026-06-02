#include <stdio.h>

int main(){
    // se declara un arreglo unidimensional de tamaño 10
    // Vector de largo 10.

    int nombre[10];
    int i;
    for(i = 0; i < 10; i++){
        nombre[i] = 20;
    }
    
    for(i = 0; i < 10; i++){
        printf("%d\n", nombre[i]);
    }

    return 0;
}