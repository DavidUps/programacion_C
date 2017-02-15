#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int n){

    int divisores=0;

    for(int i=1;i<n;i++){

        do{
            if(n%i==0)
                divisores += i;
        }while(i<n);
    }

    if(divisores==n)
        return true;
    else
        return false;

}

int main(){

    int numero;

    printf(" %i %s david-Super Mega Ultra Perfecto\n",6, es_perfecto(6)? "es" : "no es");

    return EXIT_SUCCESS;
}
