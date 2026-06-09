#include <stdio.h>

int main(){
    int numero = 100;
    FILE *archivo;
    archivo = fopen("datos1.txt", "w");
    fprintf(archivo, "%d", numero);
    return 0;
}