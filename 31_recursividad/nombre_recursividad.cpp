#include <stdio.h>
#include <stdlib.h>

void imprirf(const char *p){
    if(*p == '\0'){
        printf("\n");
        return;
    }
        printf("%c", *p);
        imprirf(p+1);
}

void imprime(const char *p){
    printf("%c", *p);
    if(*p !='\0'){
        *p++;
        imprime(p);
    }else
        printf("\n");
}


int main(int argc, char *argv[]){
    const char *p = "David";
    imprirf("dabale arroz a la zorra el arbol");

    imprime(p);

    return EXIT_SUCCESS;
}
