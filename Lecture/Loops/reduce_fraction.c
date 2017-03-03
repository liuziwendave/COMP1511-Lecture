#include <stdlib.h>
#include <stdio.h>

int main(int argc,char **argv){
   int up,dw,reminder;
   printf("Input a Fraction Number: ");
   scanf("%d/%d", &up,&dw);
   
   int n,m;
   m=up;
   n=dw;

   while(n!=0){
      reminder=m%n;
      m=n;
      n=reminder;
   }

   printf("Lowest Fraction: %d/%d\n", up/m, dw/m);

   return EXIT_SUCCESS;
}
