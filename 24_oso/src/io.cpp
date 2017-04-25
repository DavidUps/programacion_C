#include "io.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void loadnumboard(int tablero[SIZE][SIZE]){
    for(int f=0; f<SIZE; f++){
        for(int c=0; c<SIZE; c++)
            printf("\t%i\t", tablero[f][c]);
    printf("\n");
    }
}

char loadboard(char tablero[SIZE][SIZE]){
    for(int f=0; f<SIZE; f++){
        for(int c=0; c<SIZE; c++)
            printf("\t%c\t", tablero[f][c]);
    printf("\n");
    }
}

char insertj1(char tablero[SIZE][SIZE], char letra){
    int row;
    int col;

    printf("Que letra quieres guardar(O/S)");
    scanf(" %c", &letra);
    printf("\n¿En que posición la quieres guardar?\n");
    printf("Fila: ");
    scanf(" %i", &row);
    printf("\nColumna: ");
    scanf(" %i", &col);
    tablero[row][col]= letra;
}

char insertj2(char tablero[SIZE][SIZE], char letra){
    ;
}

int puntos(int puntosj1, int puntosj2){
;
}

/*Esta mal, hay que decir si ha hecho oso y parar si te dice que si */
bool oso(char letra){

    if(letra!='o' && 's')
        return true;
}
