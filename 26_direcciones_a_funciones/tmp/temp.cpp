#include <stdio.h>
#include <stdlib.h>

int resta(int num1, int num2){
    return num1+num2;
}

int suma(int num1,int num2, int(*r)(int,int)){
    return (*r) (num1,num2);;
}

int main(int argc, char *argv[]){

    int num1=5,
        num2=6;

    printf("resultado: %i", resta(num1,num2));

    printf("Resultado 2: %i", suma(num1,num2,&resta));

    return EXIT_SUCCESS;
}
