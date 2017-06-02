#include <stdio.h>
#include <stdlib.h>

bool es_Primo(int a, int p){

    if(p==1)
        return true;
    return a%p !=0 && es_Primo(a, p-1);
}

int main(int argc, char *argv[]){
    int a,
        b=a-1;
    printf("Es primo el número: ");
    scanf("%i", &a);

    printf("Resul: %i", es_Primo(a,b));

    return EXIT_SUCCESS;
}
