#include <stdlib.h>
#include <stdio.h>
#include "io.h"

void pintarTableros(char tablero[F][C], char colorposicion[2][C], char adivinar[C]){

    for(int f=0; f<4; f++){
        for(int c=0; c<10; c++){
            printf("%c", tablero[f][c]);
        }
    printf("\n");
    }

    for(int f=0; f<2; f++){
        for(int c=0; c<10; c++){
            printf("%c", colorposicion[f][c]);
        }
    printf("\n");
    }

    for(int i=0; i<4; i++){
        printf("%c", adivinar[i]);
    }
    printf("\n");
}

char datosAdivinar(char adivinar[C]){
    ;
}

char datosTablero(char tablero[F][C]){
    ;
}

char comprobarCP(char tablero[F][C], char colorposicion[2][C], char adivinar[C]){
    ;
}

bool comprobarWhile(bool comprobar){
    ;
}
