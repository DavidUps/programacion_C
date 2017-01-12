#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,resto=0;

    printf("meter número: ");
    scanf(" %i", &num);

    do{
        num = num / 2;
        resto = num % 2;
    }while(num > 0);

    printf("Resultado %i", resto);
    return EXIT_SUCCESS;
}
