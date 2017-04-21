#include <stdio.h>
#include <stdlib.h>
#include "io.h"

#define SIZE 3

int main(int argc, char *argv[]){

    char tablero[SIZE][SIZE];
    int tablero_num[SIZE][SIZE]={{'00','01','02'},{'10','11','12'},{'20','21','22'}};

    int j1point,
        j2point;

    system("clear");
    printf("OSO");
    do{
        loadnumboard(tablero_num);
        loadboard(tablero);

        insertj1(tablero);
        insertj2(tablero);
    }while(oso());

    comprobar(tablero);
    puntos(j1point,j2point);;

    return EXIT_SUCCESS;
}
