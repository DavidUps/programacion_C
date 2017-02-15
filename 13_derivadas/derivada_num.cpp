#include <stdio.h>
#include <stdlib.h>

double x_cuad(double x){ return x * x; }
double incremento(double x){ return (x_cuad(x+0.1) - x_cuad(x)) / 0.1;}

int main(){

    double x;

    printf("Número: ");
    scanf(" %lf", &x);

    printf("%lf", incremento(x));
  
    return EXIT_SUCCESS;
}
