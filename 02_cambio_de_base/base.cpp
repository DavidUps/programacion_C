#include <stdio.h>
#include <stdlib.h>

int main(){
    int decimal, reverse = 0;

    printf("Decimal: ");
    //escribir por teclado//

    scanf(" %i", &decimal);

    // Hacer (do)
    //    Imprimir decimal %2
    //    Decimal = decimal / 2
    // Mientras (while) decimal > 0
    printf("Binario: "); 
    do{
      printf("%i", decimal % 2);
      decimal /= 2;
    } while (decimal>0);
    {
      reverse = reverse * 10;
      reverse = reverse + decimal%10;
      decimal = decimal/10;
    
    }
    ;

    printf("\n");

     return EXIT_SUCCESS;
}
