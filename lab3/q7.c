// Write a program to print all prime numbers between 1 to 300
#include<stdio.h>
#include<math.h>
void main()
{
    int  n,oa,a,p=0;
    printf("Enter a number:");
    scanf("%d",&a);
    int flag=0;
    oa=a;
    int i=0;
    for( n=2;n<oa;n++)
    {
        for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
        
    }
    if(i==n)
    {
        while(a%n==0)
        {
            p=p+1;
            flag=1;
            a/=n;
        }
        if(p!=0)
        printf("%d ^ %d \n",i,p);
        p=0;
        a=oa;
    }

    }
    if(flag==0)
    {
        printf("only 1 and %d are factors ",oa);
    }
    
}