#include <stdio.h>
#include <stdilb.h>

int main(int argc,char **argv){
 



   return EXIT_SUCCESS;
}

void gettime(void){
   int time, minute;
   printf("Input 24-hour time: ");
   scanf("%d : %d", &time,&minute);

   int mins=time*60+minute;
   
   if(mins<=(8*60)
