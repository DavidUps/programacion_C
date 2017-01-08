#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma, media;

    printf("numero: ");
    scanf(" %i", &num1);
    printf("numero: ");
    scanf(" %i", &num2);
    printf("numero: ");
    scanf(" %i", &num3);
    printf("numero: ");
    scanf(" %i", &num4);
    printf("numero: ");
    scanf(" %i", &num5);
    printf("numero: ");
    scanf(" %i", &num6);
    printf("numero: ");
    scanf(" %i", &num7);
    printf("numero: ");
    scanf(" %i", &num8);
    printf("numero: ");
    scanf(" %i", &num9);
    printf("numero: ");
    scanf(" %i", &num10);

    do{
        num1+num2+num3+num4+num5+num6+num7+num8+num9+num10=suma;
        suma / 10 = media;

    }while(1);

    printf("Tu media es %i", media);
    return EXIT_SUCCESS;
}
