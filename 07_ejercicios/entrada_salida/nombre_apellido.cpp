
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre_apellido[60], nombre[30], apellido[30];

    printf("Nombre: ");
    scanf(" %s", nombre);

    printf("apellido: ");
    scanf(" %s", apellido);

    sprintf(nombre_apellido,"%s %s", nombre, apellido);

    printf("%s", nombre_apellido);

    return EXIT_SUCCESS;
}
