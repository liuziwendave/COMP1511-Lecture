#include <stdio.h>
#include <stdlib.h>

void get_num(void);

int main(int argc,char **argv){
  get_num(); 

   return EXIT_SUCCESS;
}
void get_num(void){
   long int num;
   printf("Input numbers(0 to terminate): ");
   
   long int sum=0;

   do{
   scanf("%ld", &num);
   sum=sum+num;
   
   }while (num != 0);

   printf("Sum: %ld\n", sum);
}
