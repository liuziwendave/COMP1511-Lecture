#include <stdio.h>
#include <stdlib.h>

void get_number(void);
void process_num(int x);

int main(int argc,char **argv){
   get_number();
   return EXIT_SUCCESS;
}
void get_number(void){
   int num;
   printf("Input a 2-digits number: ");
   scanf("%d", &num);
   process_num(num);
}

void process_num(int x){
   int tens=x/10;
   int ones=x%10;
   if(tens==1){
      switch(ones){ 
         case 0: printf("Ten");
                 break;
         case 1: printf("Eleven");
                 break;
         case 2: printf("Twelve");
                 break;
         case 3: printf("Thirteen");
                 break;
         case 4: printf("Fourteen");
                 break;
         case 5: printf("Fifteen");
                 break;
         case 6: printf("Sixteen");
                 break;
         case 7: printf("Seventeen");
                 break;
         case 8: printf("Eighteen");
                 break;
         case 9: printf("Nighteen");
                 break;

      }
   }else {
      switch(tens){
      case 2:printf("Twenty-");
             break;
      case 3:printf("Thirty-");
             break;
      case 4:printf("Forty-");
             break;
      case 5:printf("Fifty-");
             break;
      case 6:printf("Sixty-");
             break;
      case 7:printf("Seventy-");
             break;
      case 8:printf("Eighty-");
             break;
      case 9:printf("Ninty-");
             break;
   }
      switch(ones){
      case 1: printf("One");
              break;
      case 2: printf("Two");
              break;
      case 3: printf("Three");
              break;
      case 4: printf("Four");
              break;
      case 5: printf("Five");
              break;
      case 6: printf("Six");
              break;
      case 7: printf("Seven");
              break;
      case 8: printf("Eight");
              break;
      case 9: printf("Nine");
              break;

      }

}
printf("\n");
}

