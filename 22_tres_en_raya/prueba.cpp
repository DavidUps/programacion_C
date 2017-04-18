#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define N 3

int borrarPantalla(){
    printf("\nJugador 1 es: X\n");
    printf("Jugador 2 es: O\n");
}

void tableroMostrar(char tablero[N][N]){
    for(int i=0; i<N; i++){
        for(int f=0; f<N; f++)
            printf("\t %c \t",tablero[i][f]);
        printf("\n\n");
    }
}

void tableroDemo(int tableroejemplo[N][N]){
    printf("Las posiciones son fila(número izquierda), columna(numero derecha), la fila 1 es la 0.\n" );
    for(int i=0; i<N; i++){
        for(int f=0; f<N; f++)
            printf("\t %i \t",tableroejemplo[i][f]);
        printf("\n\n");
    }

}

char jugadorUno(int fila, int columna, char tablero[N][N]){
        printf("Turno jugador 1\n");
        printf("¿En que fila y columna lo quieres guardar?\n");
        printf("Fila: ");
        scanf(" %i", &fila);
        printf("\nColumna: ");
        scanf(" %i", &columna);
        tablero[fila][columna]='X';
        return fila, columna;
}
char jugadorDos(int fila, int columna, char tablero[N][N]){
        printf("Turno jugador 2\n");
        printf("¿En que fila y columna lo quieres guardar?\n");
        printf("Fila: ");
        scanf(" %i", &fila);
        printf("\nColumna: ");
        scanf(" %i", &columna);
        tablero[fila][columna]='O';
        return fila, columna;
}

int comprobarJugadorUno(char tablero[N][N], int juno, int columna, int fila){


    /*comprobar horizontal*/

    juno=1;

    if(tablero[fila][columna]=tablero[fila][columna+1]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[fila][columna]=tablero[fila][columna-1]){
            juno++;
            printf("Puntos: %i", juno);
            return EXIT_SUCCESS;
            if(juno=2){
                system("clear");
                printf("HOLA CAGO EN DIOS");
                system("toilet --gay -fpagga GANA EL JUGADOR1!");
                return EXIT_SUCCESS;
            }
        }
    }else
        juno=1;

}

int main(int argc, char *argv[]){

    char tablero[N][N]= {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

    int tableroejemplo[N][N]= {{00,01,02},{10,11,12},{20,21,22}};

    char jugador1,
         jugador2;

    int juno,
        jdos;

    int fila,
        columna;

    bzero(tablero, sizeof(tablero));

    system("clear");
    system("toilet --gay -fpagga TRES EN RAYA!");
    tableroDemo(tableroejemplo);
    tableroMostrar(tablero);

    for(int turno=0; turno<9; turno++){
        jugadorUno(fila,columna,tablero);
        tableroMostrar(tablero);
        comprobarJugadorUno(tablero, fila, columna, juno);
        printf("Se ha hecho la comprobracion");

        jugadorDos(fila,columna,tablero);
        tableroMostrar(tablero);

        system("clear");
        system("toilet --gay -fpagga TRES EN RAYA!");
        borrarPantalla;
        tableroMostrar(tablero);
        }

    return EXIT_SUCCESS;
}
