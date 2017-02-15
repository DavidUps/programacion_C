#include <stdio.h>
#include <stdlib.h>

int menu(){

    int menu;

    printf("Selecciona la opción \n"
           "\t1.-coche\n"
           "\t2.-motos\n"
           "\t3.-avion\n");
    printf("seleccione: ");
    scanf(" %i", &menu);
    printf("%i\n",menu);
    return menu;
}

int main(){

    char opcion = menu();


    return EXIT_SUCCESS;
}
