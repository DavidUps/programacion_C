#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Dime tu número favorito: ");
    scanf(" %i", &num);

    printf("Número favorito: %i\n", num);
  
    return EXIT_SUCCESS;
}
