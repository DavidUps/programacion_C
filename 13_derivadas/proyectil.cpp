#include <stdio.h>
#include <stdlib.h>

double a (double x,double y){

    double velocidad, tiempo=1;

    velocidad = y - x;

    return velocidad / tiempo;
}

int main(int argc, char *argv[]){

    double v[2];
    double X, Y;

    printf("dame la velocidad de X e Y: ");
    scanf(" %lf %lf", &X, &Y);

    printf("%lf", a(X,Y));


    return EXIT_SUCCESS;
}
