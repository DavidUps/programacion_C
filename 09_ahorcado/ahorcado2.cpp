#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)

const char *palabra[] = {
    "amalgama",
    "narcolepsia",
    "alcorque",
    "suricato",
    "amapola",
    "parguela",
    "bonita",
    "shuriken",
    "hermoso",
    "panenteismo",
    "nemesis",
    "anabasis",
    "antítesis",
    "origen",
    "artropodo",
    NULL
};

int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX];
    char adivinar[MAX];
    char letra;
    int aleatoria;
    int vidas=3;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    strcpy(adivinado, elegida);
    bzero(adivinado, MAX);
    bzero(adivinar, MAX);
         for (int i=0; i<strlen(elegida); i++){
                adivinar[i] = '_';

         do{
             printf("Letra: ");
             scanf(" %c", letra);
             for(int i=0; i<strlen(elegida); i++){
                 if(letra==adivinar[i])
                     adivina[i]=letra;
                 printf("%c", adivina[i]);
             }
         
         }

return EXIT_SUCCESS;
}
