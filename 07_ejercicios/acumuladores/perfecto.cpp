#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_i, num_a=0,num=0;

    printf("numero:");
    scanf(" %i", &num);

    for(num < num_i; num_a++;){
        if(num_i%num == 0)
            num_a += num;
    }

    if(num_i == num_a)
        printf("perfecto\n");
    else
        printf("no perfecto\n");
    return EXIT_SUCCESS;
}
