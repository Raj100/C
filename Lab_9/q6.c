/*Write a C program to use macro definitions for the following:
a. To test whether a character entered is a small case letter or not.
b. To test whether a character entered is a upper case letter or not.
c. To test whether a character is an alphabet or not.
d. To obtain the bigger of two numbers.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define raj hero
#define small(ch) if((int)ch>=97&&(int)ch<=122){printf("It is a small hand character\n");}else{printf("Not small hand charcter\n");}
#define upper(ch) if((int)ch>=65&&(int)ch<=90){printf("It is a upper case character\n");}else{printf("Not a upper case charcter\n");}
#define alphabet(ch) if((int)ch>=97&&(int)ch<=122||(int)ch>=65&&(int)ch<=90){printf("It is a alphabet character\n");}else{printf("Not a Alphabet.\n");}
#define compare(x,y) if(x>=y){printf("%d\n",x);}else{printf("%d\n",y);}
int main(){
char c;
printf("Enter a character:");
scanf("%c",&c);
small(c)
upper(c)
alphabet(c)
int p,q;
printf("Enter two integers:");
scanf("%d %d",&p,&q);
compare(p,q)
return 0;
}
