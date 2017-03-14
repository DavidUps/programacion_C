#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(int argc, char *argv[]){
    char tablero[N];
    char *letra = tablero;
    int num;
    int n=0;

    //PINTAR TABLERO

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

     //METER NUMEROS

     do{
        //METER LETRA
        printf("En que celda quieres guardar la letra: ");
        scanf(" %i", &num);
        printf("\nLetra: ");
        scanf(" %s", *letra);
        ++n;

     }while(n<9);
     //PINTAR OSO
        for(int i=0; i < 3; i++){
           printf("%c\t", *tablero);
         }

        printf("\n");

         for(int i=3; i < 6; i++){
           printf("%c\t", *tablero);
        }

        printf("\n");

        for(int i=6; i < 9; i++){
            printf("%c\t", *tablero);
         }

         printf("\n");


    return EXIT_SUCCESS;
}
