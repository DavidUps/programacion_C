#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[30];

    printf("nombre: ");
    scanf(" %s", nombre);
    printf("Tu nombre %s", nombre);
  
    return EXIT_SUCCESS;
}
