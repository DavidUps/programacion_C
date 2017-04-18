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

void comprobarHorizontalJ1(char tablero[N][N], int juno, int ganadorj1){

    juno=1;

    if(tablero[0][1]=tablero[0][0]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[0][1]=tablero[0][2]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;

    if(tablero[1][1]=tablero[1][0]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][1]=tablero[1][2]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;

    if(tablero[2][1]=tablero[2][0]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[2][1]=tablero[2][2]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;
}

void comprobarHorizontalJ2(char tablero[N][N], int jdos, int ganadorj2){

    jdos=1;

    if(tablero[0][1]=tablero[0][0]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[0][1]=tablero[0][2]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;

    if(tablero[1][1]=tablero[1][0]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][1]=tablero[1][2]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;

    if(tablero[2][1]=tablero[2][0]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[2][1]=tablero[2][2]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;
}

void comprobarVerticalJ1(char tablero[N][N], int juno, int ganadorj1){

    juno=1;

    if(tablero[1][0]=tablero[0][0]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][0]=tablero[2][0]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;

    if(tablero[1][1]=tablero[0][1]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][1]=tablero[2][1]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;

    if(tablero[1][2]=tablero[0][2]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][2]=tablero[2][1]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;
}

void comprobarVerticalJ2(char tablero[N][N], int jdos, int ganadorj2){

    jdos=1;

    if(tablero[1][0]=tablero[0][0]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][0]=tablero[2][0]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;

    if(tablero[1][1]=tablero[0][2]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][1]=tablero[2][1]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;

    if(tablero[1][2]=tablero[0][2]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][2]=tablero[2][2]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;
}

void comprobarDiagonalJ1(char tablero[N][N], int juno, int ganadorj1){

    juno=1;

    if(tablero[1][1]=tablero[0][2]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][1]=tablero[2][0]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;

    if(tablero[1][1]=tablero[0][0]){
        juno++;
        printf("Puntos: %i", juno);
        if(tablero[1][1]=tablero[2][2]){
            juno++;
            if(juno=3){
                system("toilet --gay -fpagga JUGADOR 1 GANA");
                ganadorj1=1;
            }
        }
    }else
        juno=1;
}

void comprobarDiagonalJ2(char tablero[N][N], int jdos, int ganadorj2){

    jdos=1;

    if(tablero[1][1]=tablero[0][2]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][1]=tablero[2][0]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;

    if(tablero[1][1]=tablero[0][0]){
        jdos++;
        printf("Puntos: %i", jdos);
        if(tablero[1][1]=tablero[2][2]){
            jdos++;
            if(jdos=3){
                system("toilet --gay -fpagga JUGADOR 2 GANA");
                ganadorj2=1;
            }
        }
    }else
        jdos=1;
}

int main(int argc, char *argv[]){

    char tablero[N][N]= {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

    int tableroejemplo[N][N]= {{00,01,02},{10,11,12},{20,21,22}};

    char jugador1,
         jugador2;

    int juno,
        jdos;

    int ganadorj1=0,
        ganadorj2=0;

    int fila,
        columna;

    bzero(tablero, sizeof(tablero));

    do{
        system("clear");
        system("toilet --gay -fpagga TRES EN RAYA!");
        tableroDemo(tableroejemplo);
        printf("\n---------------------------------------------------\n");
        tableroMostrar(tablero);

        jugadorUno(fila,columna,tablero);
        tableroMostrar(tablero);
        comprobarHorizontalJ1(tablero, juno, ganadorj1);
        comprobarVerticalJ1(tablero, juno, ganadorj1);
        comprobarDiagonalJ1(tablero, juno, ganadorj1);

        jugadorDos(fila,columna,tablero);
        tableroMostrar(tablero);
        comprobarHorizontalJ2(tablero, jdos, ganadorj2);
        comprobarVerticalJ2(tablero, jdos, ganadorj2);
        comprobarDiagonalJ2(tablero, jdos, ganadorj2);

        tableroMostrar(tablero);
        borrarPantalla;
        system("clear");
        system("toilet --gay -fpagga TRES EN RAYA!");
        printf("%i", ganadorj1);
    }while(ganadorj1=1);

    return EXIT_SUCCESS;
}
