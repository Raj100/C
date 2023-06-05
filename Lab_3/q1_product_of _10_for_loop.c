#include<stdio.h>
#include<math.h>
void main()
{
    int prod =1;
    for (int i=1;i<=10;i++)
    {
        prod=prod*i;
    }
    printf("product = %d", prod);
}