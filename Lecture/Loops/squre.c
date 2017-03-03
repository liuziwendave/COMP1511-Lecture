#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc,char **argv){
   int num;
   printf("Input a Number: ");
   scanf("%d", &num);

   int num1;
   num1=sqrt(num);
   
   printf("Squre roots: ");

   for(int i=2;i<=num1;i=i+2){
      printf("%d\t", i*i);
   }
   printf("\n");
   return EXIT_SUCCESS;
}
