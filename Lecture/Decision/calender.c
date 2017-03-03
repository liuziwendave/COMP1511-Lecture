#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   int dd,mm,yy;
   printf("Enter First Date(dd/mm/yy): ");
   scanf("%d/%d/%d", &dd,&mm,&yy);
   
   int dd1,mm1,yy1;
   printf("Enter Second Date(dd/mm/yy): ");
   scanf("%d/%d/%d\n", &dd1,&mm1,&yy1);

   if((dd1>dd)||(mm1>mm)||(yy1>yy)){
      printf("The date: %d/%d/%d is earlier.\n",dd,mm,yy);
   }else{
      printf("The date: %d/%d/%d is earlier.\n",dd1,mm1,yy1);
    } 

   return EXIT_SUCCESS;
}
