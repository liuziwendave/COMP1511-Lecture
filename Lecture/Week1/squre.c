#include <stdio.h>
#include <stdlib.h>

/*//Function Prototype
void getnum(void);
void printnum(int num1);
*/
int main(int argc,char **argv){
   
   int num;
   int squ;
   printf("Input Numbers: ");
   
   do{
   scanf("%d", &num);
   squ=num*num;
   }while(num!=0);//0 to terminat
   
   printf("Square: %d", squ);


   //getnum();

   return EXIT_SUCCESS;
}

/*//Function Definition
void getnum(void){
   int num;
   printf("Input Numbers(0 to terminate): ");
   scanf("%d", &num);
   printnum(num);
}

void printnum(int num1){
   int squre;
   do{
      scanf("%d",&num1);
      squre=num1*num1;
   }while(num1!=0);
   
   printf("Squre: %d\n",squre);
}
*/
