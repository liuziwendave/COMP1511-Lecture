#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   float num;
   float max=0.0;

   do{
      printf("Input Number: ");
      scanf("%f", &num);

      if(num>max){
         max=num;
      }
   }while(num>0);

   printf("Largest: %.3f\n", max);

   return EXIT_SUCCESS;
}
