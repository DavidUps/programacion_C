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

void comprobar(char num[F], char adv[F], char adv_fal[F], int p, int c){
    
    p=1;
    c=1;

    for(int i=0; i<F; i++)
        for(int a=0; a<F; a++){
            if(num[i]==adv[a] && i==a)
               adv_fal[i]='p';
               p=p+1;
            if(num[i]==adv[a] && i!=a)
                 adv_fal[i]='c';
                 c=c+1;
        }
}

void imprime(char num[], char adv_fal[], int p, int c){
    printf("%s\n", adv_fal);
    printf("%s\n", num);
    printf("Posicion: %i\n", p);
    printf("Columna: %i\n", c);
}
