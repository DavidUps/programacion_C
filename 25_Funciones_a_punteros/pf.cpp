#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b){

    return a+b;
}

int resta(int a, int b){

    return a-b;
}

int division(int a, int b){

    return a/b;
}

int multiplicacion(int a, int b){

    return a*b;
}
int main(int argc, char *argv[]){

    int a=2,
        b=2;

    int (*p_mates[4])(int a, int b){
        &suma,
        &resta,
        division,
        multiplicacion
    };

    printf("la suma: %i\n", (*p_mates[0])(a,b));

    printf("la resta: %i\n", (*p_mates[1])(a,b));

    printf("la division: %i\n", (*p_mates[2])(a,b));

    printf("la multiplicacion: %i\n", (*p_mates[3])(a,b));

    return EXIT_SUCCESS;
}
