#include<stdio.h>
#include<math.h>
void main()
{
    int prod =1;
    int i=1;
    do 
    {
        prod=prod*i;
        i++;
    }
    while (i<=10);
   
    
    printf("product = %d", prod);
}