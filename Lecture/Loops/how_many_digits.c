//The programe is to show the digits of the input numbers.
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   int num;   
   printf("Input number:  ");
   scanf("%d", &num);

   if((num>=0) && (num<10)){
      printf("The number %d has 1 digits\n", num);
   }
   if((num>9)&&(num<100)){
      printf("The number %d has 2 digits\n", num);
   }

   return EXIT_SUCCESS;
   }
