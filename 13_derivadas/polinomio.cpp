#include <stdio.h>
#include <stdlib.h>

int resultado(int x){

    int num[20];

    int resultado=0, potencia[20];

    //guarda los numeros
    printf("dime los numeros: ");
    for(int i=0;i < x+1; i++){
      scanf(" %i", &num[i]);
    }

    //Calcula la portencia
    for(int grado=0; grado < x; grado++){
      do{
          potencia[grado]= x * grado;
      }while (potencia[x+1]);
    }

    //Multiplica potencia * num
    for(int i=0; i < x; i++){
      do{
          resultado+= potencia[i]*num[i];
      } while (potencia[i]=potencia[x+1]);
    }

}

int main(){

    int x;

    printf("dime el valor de x: ");
    scanf(" %i", &x);

    printf(" %i", resultado(x));


   return EXIT_SUCCESS;
}
