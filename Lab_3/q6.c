// Write a program to print all prime numbers between 1 to 300
#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0;
    int  n,on;
    printf("Enter a number:");
    scanf("%d",&n);
    on=n;
    while(n!=0)
    {
        sum=(sum*10)+(n%10);
        n/=10;
        
    }

    if(sum==on)
    {
        printf("%d is a palindrome number.\n\n\n",on);
    }
    else
    {
        printf("%d is not a palindrome number.\n\n\n",on);

    }
    
    
}