#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
   int speed;
   printf("Input Wind Speed: "); 
   scanf("%d",&speed);

   if(speed<1){
      printf("Calm\n");
   }else if(speed<4){
      printf("Light air\n");
   }else if(speed<28){
      printf("Breeze\n");
   }else if("speed<48\n"){
      printf("Gale");
   }else if("spped<64"){
      printf("Strom\n");
   }else if("spped>63"){
      printf("Hurricane");
   }
   return EXIT_SUCCESS;
}
