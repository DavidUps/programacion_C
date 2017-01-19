#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *palabra[0x100];
    char buffer[0x10];
    
    system("clear");
    system("toilet -F border --gay AHORCADO");
    printf("\tMete las 16 Palabras que quieras");

    for(int i=0; i<0x10; i++){
        printf("\n\t %i Palabra: ", i+1 );
        fgets(buffer, 0x100, stdin);
        palabra[i]= (char*) malloc( strlen(buffer)+1);
        strcpy(palabra[i], buffer);
    }

    system("clear");
    printf("Bien");

    for(int i=0; i<0x10; i++)
        printf(" %s \n", palabra[i]);
   
    for (int i=0; i<0x10; i++)
        free(palabra[i]);
  
    return EXIT_SUCCESS;
}
