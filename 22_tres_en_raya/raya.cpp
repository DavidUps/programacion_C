#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define N 3

int borrarPantalla(){
    printf("\nJugador 1 es: X\n");
    printf("Jugador 2 es: O\n");
}

char tableroMostrar(char tablero[N][N]){
    for(int i=0; i<N; i++){
        for(int f=0; f<N; f++)
            printf("\t %c \t",tablero[i][f]);
        printf("\n\n");
    }

}

int tableroDemo(int tableroejemplo[N][N]){
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
        return fila,columna;
}
char jugadorDos(int fila, int columna, char tablero[N][N]){
        printf("Turno jugador 2\n");
        printf("¿En que fila y columna lo quieres guardar?\n");
        printf("Fila: ");
        scanf(" %i", &fila);
        printf("\nColumna: ");
        scanf(" %i", &columna);
        tablero[fila][columna]='O';
        return fila,columna;
}

int comprobarJugadorUno(char tablero, int jugador1, int columna, int fila){


    /*comprobar horizontal*/

    if(tablero[fila][columna]=tablero[fila][columna+1]){
        jugador1++;
        printf("Puntos: %i", jugador1);
        if(tablero[fila][columna]=tablero[fila][columna-1]){
            jugador1++;
            printf("Puntos: %1", jugador1);
            if(jugador1=3)
                system("clear");
                system("toilet --gay -fpagga GANA EL JUGADOR1!");
                return EXIT_SUCCESS;
        }
    }else
        jugador1=1;

}

int main(int argc, char *argv[]){

    char tablero[N][N]= {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

    int tableroejemplo[N][N]= {{00,01,02},{10,11,12},{20,21,22}};

    char jugador1,
         jugador2;

    int juno=1,
        jdos=1;

    int fila,
        columna;

    bzero(tablero, sizeof(tablero));

    system("clear");
    system("toilet --gay -fpagga TRES EN RAYA!");
    tableroDemo(tableroejemplo);
    tableroMostrar(tablero);

    for(int turno=0; turno<2; turno++){
        jugadorUno(fila,columna,tablero);
        tableroMostrar(tablero);

        jugadorDos(fila,columna,tablero);
        tableroMostrar(tablero);

        system("clear");
        system("toilet --gay -fpagga TRES EN RAYA!");
        borrarPantalla;
        tableroMostrar(tablero);
        }

    for(int turno=0; turno<3;turno++){
        jugadorUno(fila,columna,tablero);
        tableroMostrar(tablero);
        comprobarJugadorUno(fila,columna,juno,tablero);

        jugadorDos(fila,columna,tablero);
        tableroMostrar(tablero);
    }

    return EXIT_SUCCESS;
}
