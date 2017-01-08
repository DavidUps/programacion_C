#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num_a, num_b, resul=0;

    printf("Número 1: ");
    scanf(" %i",&num_a);
    printf("Número 2: ");
    scanf("\n %i",&num_b);

    do{
      if(num_a > 2){
         num_a = num_a / 2;
         if(num_a % 2 != 0){
             resul = num_a * 2;
             num_a = num_a *2;
             printf("Tu numero es el ");
         }
         else
              num_b = num_b * 2;
     }
    }
    while
       printf("Resultado %i \n", resul);

    return EXIT_SUCCESS;
}
