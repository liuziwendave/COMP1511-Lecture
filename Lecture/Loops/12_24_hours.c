#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   int time,minute;
   printf("Input time in 24-hour: ");
   scanf("%d : %d",&time, &minute);
   
   int ntime;
   if(time>12){
      ntime=time-12;
      printf("%d:%d",ntime,minute);
   }else{
      printf("%d:%d", time,minute);
   }
   
   if(time>12){
      printf("PM\n");
   }else{
      printf("AM\n");
   }
   
   return EXIT_SUCCESS;
}
