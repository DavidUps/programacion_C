#include <stdio.h>
#include <stdlib.h>

#define N 9

void tabla(char *tablero){

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

void tablero_resul(char *letra){

      for(int i=1; i < 4; i++){
           printf("%c\t", letra[i]);
         }

        printf("\n");

         for(int i=4; i < 6; i++){
           printf("%c\t", letra[i]);
        }

        printf("\n");

        for(int i=6; i < 9; i++){
            printf("%c\t", letra[i]);
         }

         printf("\n");
}

int main(int argc, char *argv[]){
    char tablero[N];
    char letra[N];
    int num;
    int n=0;

    tabla(tablero);
     //METER NUMEROS

     do{
        //METER LETRA
        printf("En que celda quieres guardar la letra: ");
        scanf(" %i", &num);
        printf("\nLetra: ");
        scanf(" %s", &letra[num]);
        ++n;
        tablero_resul(letra);
     }while(n>=0);

    return EXIT_SUCCESS;
}
