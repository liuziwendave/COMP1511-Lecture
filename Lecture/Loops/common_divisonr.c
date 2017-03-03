#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
   int num1,num2;
   int reminder;
   
   printf("Input Two Numbers(seperate with'Space'): ");
   scanf("%d%d",&num1, &num2);
   /*printf("Input 2nd number: ");
   scanf("%d", &num2);
*/
   /*if(num1==0){
      printf("%d is GCD\n", num2);
   }else if(num2==0){
      printf("%d is GCD\n", num1);
   }
   */
   while(num1!=0){
   reminder=num1%num2;
   num1=num2;
   num2=reminder;
   
   if(num1==0){
      printf("%d is GCD\n", num2);
   }else if(num2==0){
      printf("%d is the GCP\n", num1);
   }
   }
   printf("%d is the GCD\n", num2);
   

   return EXIT_SUCCESS;
}
