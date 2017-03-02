#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   int num;
   int sum=0;

   printf("Input numbers(0 to terminate): \n");

   do{
      printf("\t");
      scanf("%d", &num);
      sum=num+sum;
   }while(num!=0);
   
   printf("Sum: %d\n",sum);

   return EXIT_SUCCESS;
}
