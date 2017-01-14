#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Codigo ASCII: ");

    for(int i = 0; i <256; i++)
        printf("-%c\n",i);
  
    return EXIT_SUCCESS;
}
