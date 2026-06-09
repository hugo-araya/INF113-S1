#include <stdio.h>

int main(){
    int numero;
    FILE *archivo;
    archivo = fopen("datos1.txt", "a");
    numero = 0;
    while (numero < 10){
        fprintf(archivo, "\n%d", numero);
        numero = numero + 1;
    }
    fclose(archivo);
    return 0;
}