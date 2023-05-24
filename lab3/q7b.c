#include<stdio.h>
#include<math.h>
void main()
{
    int  b,a,prod=1;
    printf("Enter a number and its power:");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++)
    {
        prod=prod*a;
    }
    printf("%d\n",prod);
    
}