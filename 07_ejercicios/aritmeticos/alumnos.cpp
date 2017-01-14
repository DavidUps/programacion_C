#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista, fila;

    printf("Numero: ");
    scanf(" %i", &lista);
    fila = lista / 17 + 1;
    printf("fila %i columna %i \n", fila, fila);

    return EXIT_SUCCESS;
}
