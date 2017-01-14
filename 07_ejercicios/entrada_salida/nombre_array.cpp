#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[30];

    printf("Escribre tu nombre: ");
    scanf(" %s", nombre);

    printf("tu nombre es: %s", nombre);
  
    return EXIT_SUCCESS;
}

