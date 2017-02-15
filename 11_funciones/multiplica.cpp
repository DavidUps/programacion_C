#include <stdio.h>
#include <stdlib.h>

int multiplica(int num1, int num2){

    return num1*num2;
}

int main(){

    int a,b;

    printf("%i",a=getchar() -'0');

    printf("x%i", b=getchar() -'0');

    printf("=%i\n", multiplica(a,b));

    return EXIT_SUCCESS;
}
