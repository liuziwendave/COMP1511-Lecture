#include <stdlib.h>
#include <stdio.h>

int main (int argc,char ** argv){
   char ch;
   printf("Input Phone Number: ");
   do{
      ch=getchar();
      switch(ch){
         case 'A': case'B':case'C':
            puts("1");
   }
   }while((getchar())!='\n');
   return EXIT_SUCCESS;
}
