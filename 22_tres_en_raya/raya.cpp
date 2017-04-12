#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define N 3

int main(int argc, char *argv[]){

    char tablero[N][N];

    char jugador1,
         jugador2;

    int fila,
        columna;

    int turno_max = 9;

    /*LIMPIAR MATRIZ TABLERO*/

    bzero(tablero, sizeof(tablero));

    /*BORRAR PANTALLA TITULO*/

    system("clear");
    system("toilet --gay -fpagga TRES EN RAYA!");

    printf("\nJugador 1 es: X\n");
    printf("Jugador 2 es: O\n");

    /* MOSTRAR TABLERO CON POSICIONES */

    for(int i=0; i<N; i++){
        for(int f=0; f<N; f++)
            printf("\t %i \t",tablero[i][f]);
        printf("\n\n");
    }

    /* TURNOS */

    for(int turno=0; turno<2; turno++){
        printf("Turno jugador 1\n");
        printf("¿En que fila y columna lo quieres guardar?\n");
        printf("Fila: ");
        scanf(" %i", &fila);
        printf("\nColumna: ");
        scanf(" %i", &columna);
        tablero[fila][columna]='X';
        for(int i=0; i<N; i++){
            for(int f=0; f<N; f++)
                printf("%i \t", tablero[i][f]);
            printf("\n");
        }

        printf("Turno jugador 2\n");
        printf("¿En que fila y columna lo quieres guardar?\n");
        printf("Fila: ");
        scanf(" %i", &fila);
        printf("\nColumna: ");
        scanf(" %i", &columna);
        tablero[fila][columna]='O';
        for(int i=0; i<N; i++){
            for(int f=0; f<N; f++)
                printf("%i \t", tablero[i][f]);
            printf("\n");
        }

    }

    return EXIT_SUCCESS;
}
