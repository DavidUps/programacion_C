#include <stdlib.h>
#include <stdio.h>

int main()
{
   int n, intercambio = 0;
 
   printf("Escribir número:\n");
   scanf("%i", &n);
 
   while (n != 0)
   {
         intercambio = intercambio * 10;
         intercambio = intercambio + n%10;
         n       = n/10;
      }
 
   printf("tu número intercambiado es:  %i\n", intercambio);
 
   return 0;
}
