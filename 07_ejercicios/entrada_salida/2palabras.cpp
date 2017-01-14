#include <stdio.h>
#include <stdlib.h>

int main(){
    char palabras[200];
    char palabra1[100], palabra2[100];

    printf("Palabra_1: ");
    scanf(" %s", palabra1);

    printf("Palabra_2: ");
    scanf(" %s", palabra2);
  
    sprintf(palabras,"%s %s", palabra1, palabra2);
    printf("palabras %s", palabras);
    return EXIT_SUCCESS;
}
