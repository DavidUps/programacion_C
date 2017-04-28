#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){

    return op1+op2;
}

int resta(int op1, int op2, int(*a)(int,int){

    return a(op1,op2);
}

int main(int argc, char *argv[]){

    int op1=2,
        op2=6;

    printf("%i", suma(op1,op2));

    printf("%i", resta(op1,op2,&suma);

    return EXIT_SUCCESS;
}
