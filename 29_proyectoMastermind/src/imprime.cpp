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

void insertar(int num[F]){
    for(int i=0; i<F; i++){
        printf("\n Número %i: ", i);
        scanf(" %i", &num[i]);
    }
}

char comprobar(int num[F],int adv[F], char adv_fal[F]){

    for(int i=0; i<F; i++){
        for(int a=0; a<F; a++){
            if(num[i]==adv[a] && i==a){
               adv_fal[i]='p';
             }if(num[i]==adv[a] && i!=a){
                 adv_fal[i]='c';
             }
        }
    }
}

void imprime(int num[F], char adv_fal[F]){

    for(int i=0; i<F;i++){
        printf("%c", adv_fal[i]);
    }

    printf("\n");

    for(int i=0; i<F; i++){
        printf("%i", num[i]);
    }

    printf("\n");
}
