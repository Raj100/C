#include<stdio.h>
#include<math.h>
void main()
{
    int sum =0,sumo=0;
    int i=2;
    int  n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(i==n&&i!=2)
    {
        printf("%d is a prime number.\n\n",n);
    }
    else
    {
         printf("%d is not a prime number.\n\n",n);
    }
}