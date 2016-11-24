

#include <stdio.h>
 
int main()
{
   int decimal, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &decimal);
 
   while (decimal != 0)
   {
         reverse = reverse * 10;
         reverse = reverse + decimal%10;
         decimal       = decimal/10;
      }
 
   printf("Reverse of entered number is = %d\n", reverse);
 
   return 0;
}
