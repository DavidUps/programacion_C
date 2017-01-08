#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista[10];

    for( int num = 0; num < 10; num++){
        lista[num] = num * num;
        printf("%i\n", lista[num]);

    }
    return EXIT_SUCCESS;
}
