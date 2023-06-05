#include<stdio.h>
void main()
{
int a;
long b;
float c;
double d;
char e;

printf("Size of integer:%ld\n",sizeof(a));
printf("Size of long:%ld\n",sizeof(b));
printf("Size of float:%ld\n",sizeof(c));
printf("Size of double:%ld\n",sizeof(d));
printf("Size of char:%ld\n",sizeof(char));
printf("\nusing ul(unsigned long)\n");
printf("Size of integer:%lu\n",sizeof(a));
printf("Size of long:%lu\n",sizeof(b));
printf("Size of float:%lu\n",sizeof(c));
printf("Size of double:%lu\n",sizeof(d));
printf("Size of char:%lu\n",sizeof(char));
}
