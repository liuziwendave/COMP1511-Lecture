#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv){
   int num;
   char ch;
   printf("Input numbers: ");
   scanf("%d",&num);
   ch=getchar();

   for(int i=1;i<=num;i++){
      printf("%3d: %6d\n", i, i*i);
      
      if(i%24==0){
         printf("Plese ENTER to continue...");
         ch=getchar();
         }
   }
   
   return EXIT_SUCCESS;
}
