#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas=0, media, num=0;

    do{
        printf("Nota alumno %i: ", num + 1);
        scanf(" %i", &notas);
    }while(notas > -1);
    
    media = notas / num;
    printf("La media es: %i", media);

    return EXIT_SUCCESS;
}
