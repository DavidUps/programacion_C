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

void comprobar(char num[F], char adv[F], char adv_fal[F]){

    for(int i=0; i<F; i++)
        for(int a=0; a<F; a++){
            if(num[i]==adv[a] && i==a)
               adv_fal[i]='p';
            if(num[i]==adv[a] && i!=a)
                 adv_fal[i]='c';
        }
}

void imprime(char num[], char adv_fal[]){
    printf("%s\n", adv_fal);
    printf("%s\n", num);
}
