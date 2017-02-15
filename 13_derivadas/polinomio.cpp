#include <stdio.h>
#include <stdlib.h>



int main(){

    double num[20];

    int num_p, x, resultado=0;

    //numero de terminos del polinomio
    printf("dime cuantos numeros vas a poner: ");
    scanf(" %i", &num_p);

    //guarda los numeros
    printf("dime los numeros: ");
    for(int i=0;i < num_p; i++){
      scanf(" %lf", &num[i]);
    }

    for(int i=0; i < num_p; i++){
      printf("%lf", num[i]);
    }


   return EXIT_SUCCESS;
}
