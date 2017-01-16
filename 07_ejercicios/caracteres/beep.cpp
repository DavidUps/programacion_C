#include <stdio.h>
#include <stdlib.h>

int main(){

    char beep[3] = {54, 54, 0};
    for(int a=0;a < 3; a++){
        printf("Caracter: %i\a", beep[a]);
    }
    return EXIT_SUCCESS;
}
