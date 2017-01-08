
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[20];

   printf ("nombre: ");
   scanf ("%c", &nombre[0]);
   printf ("%c", nombre[0-20]);
    return EXIT_SUCCESS;
}
