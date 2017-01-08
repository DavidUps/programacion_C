#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0;

    for (num; num < 100; num++){
        printf("\t%i\n",num + 1);
    }
    return EXIT_SUCCESS;
}
