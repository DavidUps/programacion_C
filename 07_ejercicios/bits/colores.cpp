#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Los colores son:");
    printf("\nROJO, AMARILLO, AZUL");
    printf("\nPara el color pon un 1, Ejemplo 011");
    printf("\nEscribe: ");
    scanf(" %i", &num);

    if(num == 000)
        printf("Tu color es el negro\n");
    if(num == 001)
        printf("Tu color es el azul\n");
    if(num == 010)
        printf("Tu color es el amarillo\n");
    if(num == 100)
        printf("Tu color es el rojo\n");
    if(num == 011)
        printf("Tu color es el verde\n");
    if(num == 101)
        printf("Tu color es el morado\n");
    if(num == 110)
        printf("Tu color es el naranja\n");
    if(num == 111)
        printf("Tu color es el blanco\n");
    else
        printf("Lo has escrito mal\n");

    return EXIT_SUCCESS;
}
