#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 0x100

int main(){
    char buffer[n];
    char *palabra;

    printf("Nombre: ");
    fgets(buffer, n, stdin);

    palabra = (char *)malloc(strlen(buffer)+1);

    strcpy(palabra,buffer);

    printf(" %s", palabra);

    free(palabra);

    return EXIT_SUCCESS;
}
