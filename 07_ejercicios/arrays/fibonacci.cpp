#include <stdio.h>
#include <stdlib.h>

#define N 100
int main(){

    unsigned f[N];

    f[1] = f[0] = 1;

    for (int i=2; i<N; i++)
        f[i] = f[i-1] +f[i-2];
    
    for (int i=0; i<N; i++)
        printf("%u", f[i]);
    printf("\n");


   return EXIT_SUCCESS;
}
