#include <stdio.h>
#include <stdlib.h>

int main(){
    int dni;
    char letra, letra_dni;

    system ("clear");
    system ("toilet Comprueba tu dni");

    printf("Escribe tu dni: ");
    scanf(" %i", &dni);
    printf("\n Escribe la letra de tu dni: ");
    scanf(" %c", &letra_dni);

    dni = dni % 23 ;

    if(dni == 0)
        letra = 't';
    if(dni == 1)
        letra = 'r';
    if(dni == 2)
        letra = 'w';
    if(dni == 3)
        letra = 'a';
    if(dni == 4)
        letra = 'g';
    if(dni == 5)
        letra = 'm';
    if(dni == 6)
        letra = 'y';

    if(letra == letra_dni)
        printf("\n \t No te han timado \n");
    else
        printf("\n \t Te han timado \n");

    return EXIT_SUCCESS; }
