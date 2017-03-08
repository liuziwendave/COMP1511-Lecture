#include <stdlib.h>
#include <stdio.h>

void get_message(void);

int main (int argc,char **argv){
   get_message();

   return EXIT_SUCCESS;
}
void get_message(void){
   char ch; 
   int n=0;

   printf("Input Message: ");
   while(getchar()!='\n'){
      n++;
   }
   printf("Length: %d\n", n);
}

