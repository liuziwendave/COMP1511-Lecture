#include <stdio.h>
#include <Stdlib.h>

int main (int argc,char **argv){
   int x=0;
   while(x<=1000){
      if(x%13==0){
         printf("%d\n",x);
      }
      x++;
   }


   return EXIT_SUCCESS;
}
