#include <stdio.h>
#include <stdlib.h>

#define A 1
#define B 2
#define C 3
#define D 4
#define F 5

void ask_grade(void);
void compar_grade(int x);
void grade_lev(int y);


int main (int argc,char **argv){
   ask_grade();
   return EXIT_SUCCESS;
}

void ask_grade(void){
   int grade;
   printf("Input Grade: ");
   scanf("%d", &grade);
   compar_grade(grade);
}

void compar_grade(int x){
   if(x<60){
      x=F;
   }else if(x<70){
      x=D;
   }else if(x<80){
      x=C;
   }else if(x<90){
      x=B;
   }else if(x<101){
      x=A;
   }
   grade_lev(x);
}  

void grade_lev(int y){
   printf("Letter Grade: ");
   switch(y){
      case 1: printf("A");
              break;
      case 2: printf("B");
              break;
      case 3: printf("C");
              break;
      case 4: printf("D");
              break;
      case 5: printf("F");
              break;
      default: printf("Error Input\n");
               break;
   }
   printf("\n");
}
