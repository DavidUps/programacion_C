#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(int argc, char *argv[]){

    char tablero[N][N];
    int tablero_mostrar[N][N] = {{1,2,3},{4,5,6},{7,8,9}};

    char jugador1,
         jugador2;

    int celda;
    int turno_max = 9;

    /* ASIGNAR X | O A CADA JUGADOR */

    printf("Jugador 1, que quieres ser x |o:");
    scanf(" %c", &jugador1);

    if(jugador1=='x'){
        jugador2='o';
    }else
        jugador2='x';

    printf("Jugador 1 es: %c \n", jugador1);
    printf("Jugador 2 es: %c \n", jugador2);

    /* MOSTRAR TABLERO CON POSICIONES */

    for(int i=0; i<N; i++){
        for(int f=0; f<N; f++)
            printf("%i \t", tablero_mostrar[i][f]);

        printf("\n");
    }

    /* TURNOS */

    for(int turno=0; turno<4; turno++){
    
        printf("Turno jugador 1");
        printf("¿En que celda lo quieres guardar?");
        scanf(" %i", &celda);
        /* Saber como calcular el numero de celda marcada por el usuario para meter lo que contenca j1/j2 */
    }

    return EXIT_SUCCESS;
}
