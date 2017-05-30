#include <stdlib.h>
#include <stdio.h>
#include "imprime.h"

#define N 30
#define F 4

void saluda(char nombre[N]){
    printf("Hola, cual es tu nombre: ");
    scanf(" %s", nombre);
    system("clear");
    system("toilet --gay -fpagga MASTERMIND");
    printf("Bueno %s, texto para insertar numeros|colores", nombre);
}

void insertar(char num[F]){
    printf("\n Intento : ");
    scanf(" %4[1-4]", num);
}

void comprobar(char num[F], char adv[F], char adv_fal[F], int *p, int *c){

    char num2[F];
        for(int i=0; i<F; i++){
            num2[i]=num[i];
        }
    char adv2[F];
        for(int i=0; i<F; i++){
            adv2[i]=adv[i];
        }

    for(int i=0; i<F; i++)
        for(int a=0; a<F; a++){
            if(num2[i]==adv2[a] && i==a){
               (*p)++;
               adv_fal[i]='p';
               num2[i]='*';
               adv2[i]='x';
            }
            if(num2[i]==adv2[a] && i!=a){
                (*c)++;
                adv_fal[i]='c';
                num2[i]='*';
                adv2[i]='x';
            }
        }
}

void imprime(char num[], char adv_fal[], int p, int c){
    printf("%s\n", adv_fal);
    printf("%s\n", num);
    printf("Posicion: %i\n", p);
    printf("Columna: %i\n", c);
}
