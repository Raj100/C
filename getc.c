#include<stdio.h> 

int main(){
      char val;
   val = getc(stdin);
   printf("Enter the character: \n");
   printf("Character entered: ");
   putc(val, stdout);
     return 0;
}