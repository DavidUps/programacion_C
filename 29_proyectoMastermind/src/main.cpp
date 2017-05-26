#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "imprime.h"

int main(int argc, char *argv[]){

    char nombre[N];

    char adv_fal[] = "****";
    char num[F+1],
         adv[F+1];

    adv[F] = num[F] = '\0';

    srand(time(NULL));
    for (int i=0; i<F; i++)
        adv[i] = (char) (rand() % F) + 1 + '0';

#ifndef NDEBUG
    fprintf( stderr, "current guess is: %s\n", adv );
#endif

    saluda(nombre);
    insertar(num);
    comprobar(num, adv, adv_fal);
    imprime(num, adv_fal);

    return EXIT_SUCCESS;
}
