#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    do{
        printf("Número: ");
        scanf(" %i", &num);
    }
    while(num < 10);

  
    return EXIT_SUCCESS;
}
