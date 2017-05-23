#include <stdlib.h>
#include <stdio.h>
#include "io.h"

void pintarTableros(char tablero[F][C], char colorposicion[2][C], char adivinar[C]){

    for(int f=0; f<F; f++){
        for(int c=0; c<C; c++){
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

    for(int i=0; i<F; i++){
        printf("%c", adivinar[i]);
    }
    printf("\n");
}
void datosAdivinar(char adivinar[C]){
    adivinar[0]='a';
    adivinar[1]='r';
    adivinar[2]='m';
    adivinar[3]='c';
}

char datosTablero(char tablero[F][C]){

    printf("Meter datos: [Azul-a | Rojo-r | Naranja-n | Marron-m | Blanco-b] \n");
    for(int f=0; f<4; f++){
        printf("Color %i",f);
        scanf(" %c", &tablero[0][f]);
    }
}

char comprobarCP(char tablero[F][C], char colorposicion[2][C], char adivinar[C]){
    ;
}

bool comprobarWhile(bool *comprobar){
    ;
}
