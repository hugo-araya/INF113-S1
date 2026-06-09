#include <stdio.h>

int main(){
    int numero;
    FILE *archivo;
    archivo = fopen("datos.txt", "r");
    while (!feof(archivo)){
        fscanf(archivo, "%d", &numero);
        printf("%d\n", numero);
    }
    return 0;
}