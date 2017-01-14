hgadsfginclude <stdio.h>
#include <stdlib.h>

int main(){
    char nombre_apellido[30], nombre[15], apellido[15];

    printf("Nombre: ");
    scanf(" %s", nombre);
    fgets(nombre, 15, stdin);


    printf("apellido: ");
    scanf(" %s", apellido);
    fgets(apellido, 15, stdin);

    sprintf(nombre_apellido,"%s %s", nombre, apellido);

    printf("%s", nombre_apellido);

    return EXIT_SUCCESS;
}
