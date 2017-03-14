#include <stdio.h>
#include <stdlib.h>
#define N 10

int pintar_tablero(char *tablero){

    for(int i=1; i < 4; i++){
        tablero[i] = i;
        printf("%i\t", tablero[i]);
    }

    printf("\n");

    for(int i=4; i < 7; i++){
        tablero[i] = i;
        printf("%i\t", tablero[i]);
    }

    printf("\n");

    for(int i=7; i < 10; i++){
        tablero[i] = i;
        printf("%i\t", tablero[i]);
    }

    printf("\n");

}

int main(int argc, char *argv[]){
    char tablero[N];
    int num;

        return EXIT_SUCCESS;
}
