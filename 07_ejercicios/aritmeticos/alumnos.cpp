#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista, fila;

    printf("Numero: ");
    scanf(" %i", &lista);
    fila = lista / 17 + 1;
    printf("%i\n", fila);

    return EXIT_SUCCESS;
}
