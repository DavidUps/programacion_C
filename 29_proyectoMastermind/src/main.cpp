#include <stdio.h>
#include <stdlib.h>
#include "io.h"

#define F 4
#define C 10

int main(int argc, char *argv[]){

    char tablero[F][C];
    char colorposicion[2][C];
    char adivinar[F];
    bool comprobar;

    /* pintarTableros(tablero, colorposicion,adivinar);*/
    datosAdivinar(adivinar);
    do{
        datosTablero(tablero);
        pintarTableros(tablero, colorposicion,adivinar);
        comprobarCP(tablero, colorposicion, adivinar);
    }while(comprobarWhile(comprobar));

    return EXIT_SUCCESS;
}
