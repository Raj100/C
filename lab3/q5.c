// Write a program to print all prime numbers between 1 to 300
#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,sum=0;
    int  n,a;
    printf("Enter a number and number of digits in it:");
    scanf("%d %d",&n,&a);
   
    for(i=0;i<a;i++)
    {
        sum=sum+(n%10);
        n/=10;
        
    }
    
        printf("Sum= %d\n\n\n",sum);
    
    
}