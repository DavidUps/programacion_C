#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,resto=0;

    printf("meter número: ");
    scanf(" %i", &num);
    printf("Resultado: ");
    do{
        printf("%i", num % 2);
        num/= 2;
    }while(num > 0);

    printf("\n");

    return EXIT_SUCCESS;
}
