#include <stdio.h>
#include <stdlib.h>

#define N 20

struct Tasignatura{

    int programacion;
    int bases;
    int lenguajes;
    int entornos;
};

struct Talumnos{

    char nombre[N];
    int numero;
    struct Tasignatura;
    int nota;
};

int main(int argc, char *argv[]){

    struct Talumnos david;

    printf("Meter nombre: ");
    scanf(" %s", david.nombre);
    printf("Meter número: ");
    scanf(" %s", &david.numero);
    printf("Meter nota programacion: ");
    scanf(" %s" &david.Tasignatura.programacion);
    printf("Meter nota programacion: ");

    prinft("Meter nota programacion: ");


    return EXIT_SUCCESS;
}
