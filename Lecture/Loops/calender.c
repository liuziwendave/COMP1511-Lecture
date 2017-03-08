#include <stdlib.h>
#include <stdio.h>

//int day2,day3;

void get_date(void);
//void process_num(int date,int date1);

int main (int argc,char **argv){
   get_date();
   
   return EXIT_SUCCESS;
}

void get_date(void){
   int days, day1;
   printf("Input Days in a Month: ");
   scanf("%d", &days );
   printf("Input Starting days of a Week: ");
   scanf("%d", &day1);
   
   int i;
   int day=1;
   int inte=days+day1-1;
   for(i=0;i<=inte;i++){
      if(i<day1){
         printf("   ");
      }else{
         printf("%3d", day++);
      }  
      if(i%7==0){
         printf("\n");
      }
   }
   printf("\n");
}


   //process_num(days, day1);


/*
void peocess_num(int date,int date1){
   int i;
   int day=1;
   for (i=0; i<=date;i++){
      if(i<date1){
         printf("  ");
      }else{
         printf("%3d", day++);
      }

      if(i%7==0){
         printf("\n");
      }
   }
}
*/

