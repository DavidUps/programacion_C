#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CANTIDAD(x) (sizeof( (x)) / sizeof (char *) -1)

int main(){
    const char *palabra[]={
        "hola",
        "mala",
        "informacion",
        "pecora",
        "surikato",
        "telefono",
        "espiritu",
        NULL
    };
    const char *elegida;
    char adivina[15];
    int aleatorio;
    char letra[1];
    int vidas=55;

    system("clear");
    system("toilet -F border --gay AHORCADO");

    srand(time(NULL));
    aleatorio = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatorio];

    bzero(adivina,15);

    for(int i=0; i<strlen(elegida); i++){
        adivina[i]= '_';
        printf("%c\n", adivina[i]);

    }
    printf("\n\a");
    printf("\n");

    do{
        printf("vidas: %i", vidas);
        printf("\n \t Letra: ");
        scanf(" %c", letra);

        for(int i=0; i<strlen(elegida);i++){

            if(elegida[i]==letra[0]){
                adivina[i]=letra[0];

            }
            printf("%c", adivina[i]);
        }vidas=vidas-1;
     }
     while(vidas>=0);


    return EXIT_SUCCESS;
}
