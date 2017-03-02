#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
   int num;
   int max=0;

   do{
      printf("Input numbers(0 to terminate): ");
      scanf("%d", &num);

      if(num>max){
         max=num;
      }
   }while(num!=0);

   printf("The Max: %d\n", max);

   return EXIT_SUCCESS;
}
