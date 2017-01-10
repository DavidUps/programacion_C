#include <stdio.h>
#include <stdlib.h>

int main(){
    char imprimir[] = "david";
    int tamano = sizeof(imprimir)/sizeof(char)-1;
    char reves[5];

    for(int a = 0; a < sizeof(imprimir)/sizeof(char)- 1; a++){
        reves[tamano] = imprimir[a];
        tamano --;
    }

    printf(" %s\n", reves);
    return EXIT_SUCCESS;
}
