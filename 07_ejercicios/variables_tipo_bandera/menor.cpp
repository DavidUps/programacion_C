#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num_menor1, num_menor2, num_menor3, num_menor4, num_menor5, num_01, num_02, num_03;

    printf("Escribe el primer número:");
    scanf(" %i", &num1);
    printf("Escribe el segundo número:");
    scanf(" %i", &num2);
    printf("Escribe el tercer número:");
    scanf(" %i", &num3);
    printf("Escribe el cuarto número:");
    scanf(" %i", &num4);
    printf("Escribe el quinto número:");
    scanf(" %i", &num5);
    printf("Escribe el sexto número:");
    scanf(" %i", &num6);
    printf("Escribe el septimo número:");
    scanf(" %i", &num7);
    printf("Escribe el octavo número:");
    scanf(" %i", &num8);
    printf("Escribe el noveno número:");
    scanf(" %i", &num9);
    printf("Escribe el decimo número:");
    scanf(" %i", &num10);



    if(num1 < num2){
        num1 = num_menor1;
    }
    else
        num2 = num_menor1;

    if(num3 < num4)
        num3 = num_menor2;
    else
        num4 = num_menor2;

    if(num5 < num6)
        num5 = num_menor3;
    else
        num6 = num_menor3;

    if(num7 < num8)
        num7 = num_menor4;
    else
        num8 = num_menor4;
    
    if(num9 < num10)
        num9 = num_menor5;
    else
        num10 = num_menor5;

    if(num_menor1 < num_menor2)
        num_menor1 = num_01;
    else
        num_menor2 = num_01;

    if(num_menor3 < num_menor4)
        num_menor3 = num_02;
    else
        num_menor4= num_02;

    if(num_01 < num_02)
        num_01 = num_03;
    else
        num_02 = num_03;

    if(num_03 < num_menor5)
        printf("menor %i \n", num_03);
    else
        printf("menor %i \n", num_menor5);






  return EXIT_SUCCESS;

}
