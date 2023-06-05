// Write a program to print all prime numbers between 1 to 300
#include<stdio.h>
#include<math.h>
void main()
{
    int i=2;
    int  n,a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
        
    }
    if(i==n&&i!=2)
    {
        printf("%d ",n);
    }
    }
    
}