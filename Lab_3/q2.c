#include<stdio.h>
#include<math.h>
void main()
{
    int sum =0,sumo=0;
    int i=1;
    int a,b;
    printf("Enter the range:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    i=b;
    b=a;
    }
    else
    {
        i=a;
    }
    while(i<=b)
    {
        if(i%2==0)
        sum=sum+i;
        else
        sumo=sumo+i;

        i++;
    }
    
   
    
    printf("sum of even numbers = %d\n", sum);
    printf("sum of odd numbers = %d\n", sumo);
}