#include <stdio.h>
#include <stdlib.h>
#include "imprime.h"

#define N 30
#define F 4

int main(int argc, char *argv[]){

    char nombre[N];

    char adv_fal[N] ={'*','*', '*', '*'};
    int num[F],
        adv[F]= {1,2,3,4};

    saluda(nombre);
    insertar(num);
    comprobar(num, adv, adv_fal);
    imprime(num, adv_fal);

    return EXIT_SUCCESS;
}
