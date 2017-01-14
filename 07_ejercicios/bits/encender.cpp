#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_decimal, num_bin;
    
    printf("Dame tu número en decimal: ");
    scanf(" %i", &num_decimal);
    printf("Binario: ");
    do{
        printf("%i", num_decimal % 2);
        num_decimal /= 2;
    }
    while(num_decimal > 0);
    printf("\n Como quieres que se quede: ");
    scanf(" %i", &num_bin);
    printf("Se queda en %i\n", num_bin);

  
    return EXIT_SUCCESS;
}
