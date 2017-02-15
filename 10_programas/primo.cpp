#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){

    for(int i=2;i<n;i++){
      if(n%i==0)
          return false;
    }

    return true;
}

int main(){

    int numero;

    printf(" %i %s primor\n",7, es_primo(7)? "es" : "no es");

    return EXIT_SUCCESS;
}
