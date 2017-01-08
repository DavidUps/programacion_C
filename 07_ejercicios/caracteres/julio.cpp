#include <stdio.h>
#include <stdlib.h>

int main(){

    char cifrado[] = "juapa";

    for(int a = 0;a < sizeof(cifrado)-1; a++)
        printf(" %c", cifrado[a]+3);
  
    return EXIT_SUCCESS;
}
