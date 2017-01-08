#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, div=2;

    printf("Numero:");
    scanf("%i", &num);

    for(div; div < num; div++){
        if(num % div == 0){

            printf("tiene divisores\n");
            return EXIT_SUCCESS;
        }
        printf("no tiene divisores\n");
    }
    return EXIT_SUCCESS;
}
