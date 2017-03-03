#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   float income;
   printf("Input Income: ");
   scanf("%f", &income);
   
   if(income<750){
      printf("Tax: $%.3f\n", income*0.01);
   }else if(income<=2250){
      printf("Tax: $%.3f\n", (income-750)*0.02+7.50);
   }else if(income<=3750){
      printf("Tax: $%.3f\n", (income-2250)*0.03+37.50);
   }else if(income<=5250){
      printf("Tax: $%.3f\n", (income-3750)*0.04+82.50);
   }else if(income<=7000){
      printf("Tax: $%.3f\n", (income-5250)*0.05+142.50);
   }else if(income>7000){
      printf("Tax: $%.3f\n", (income-7000)*0.06+230.00);
   }

   return EXIT_SUCCESS;
}


