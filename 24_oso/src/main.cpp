#include <stdio.h>
#include <stdlib.h>
#include "io.h"

#define SIZE 3

int main(int argc, char *argv[]){

    char tablero[SIZE][SIZE]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    int tablero_num[SIZE][SIZE]={{00,01,02},{10,11,12},{20,21,22}};

    char letra;

    char respuesta;

    int chocolate=0;

    int j1point,
        j2point;

    system("clear");
    do{
        system("clear");
        loadnumboard(tablero_num);
        loadboard(tablero);

        insertj1(tablero, letra);
        printf("Jugador 1 has hecho oso (s/n): ");
        scanf(" %c", &respuesta);
            if(respuesta=='s'){
                checkoso(tablero,chocolate);
                if(chocolate==1){
                    j1point++;
                }
            }
        printf("PRUEBA");
        insertj2(tablero, letra);
        printf("Jugador 2 has hecho oso (s/n): ");
        scanf(" %c", &respuesta);
            if(respuesta=='s'){
                checkoso(tablero,chocolate);
                if(chocolate==1){
                    j1point++;
                }
            }

    }while(oso(letra));
    puntos(j1point, j2point);

    return EXIT_SUCCESS;
}
