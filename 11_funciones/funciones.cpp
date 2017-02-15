#include <stdio.h>
#include <stdlib.h>

int suma(int numero1, int numero2){
    int resultado=0;
    resultado = numero1+numero2;
    return resultado;

}

int main(){

    int resultado;

    resultado = suma(2,3);

    printf(" %i\n", resultado);
  
    return EXIT_SUCCESS;
}
