#include <stdio.h>
#include <stdlib.h>

#define N 6

void invertir(char nombre[N], int n){
    
    char *ini = nombre;
    char *fin = nombre;
    char aux;

    for(;ini < fin; ++ini, --fin){
        aux  = *ini;
        *ini = *fin + n -2;
        *fin = aux;
    }
}

int main(int argc, char *argv[]){

    char nombre[N]={'D','a','v','i','d'};

    printf("%s\n", nombre);

    printf("%s\n", invertir(nombre,N));
    return EXIT_SUCCESS;
}
