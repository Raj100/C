// Write a program to print all prime numbers between 1 to 300
#include<stdio.h>
#include<math.h>
void main()
{
    int n,a=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
printf("Amstrong numbers:\n");
    
    for(int j=1;j<=n;j++)
    {
        a=j;
    while(a!=0)
    {
        sum=sum+pow((a%10),3);
        a/=10;
    }
    if(sum==j)
    {
        printf("%d\n",j);
    }

     sum=0;

    }

    
    
}