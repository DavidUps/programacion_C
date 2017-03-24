#include <stdio.h>
#include <stdlib.h>

#define N 6

void invertir(char nombre[N], int n){
    
    char *ini = nombre;
    char *fin = nombre + n;
    char aux;

    for(;ini < fin; ini++, fin--){
        aux  = *ini;
        *ini = *fin;
        *fin = aux;
    }
}

int main(int argc, char *argv[]){

    char nombre[N]={'D','a','v','i','d'};

    printf("%s\n", nombre);

    invertir(nombre,N);

    printf("%s\n", nombre);
    return EXIT_SUCCESS;
}
