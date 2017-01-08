#include <stdio.h>
#include <stdlib.h>

int main(){
    char nom[] = {68, 65, 86, 73, 68};

    for(int a = 0; a < sizeof(nom) / sizeof (int); a++)
      printf(" %c", nom[a]);
  
    return EXIT_SUCCESS;
}
