
#include <stdio.h>
#include<math.h>
void div(int a)
{ 
    int i=0;
    printf("Divisors:\n");
        for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\t",i);
        }
        
    }
    printf("\n");
}
void perfect(int n,int *ans)
{int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    *ans= sum;
}

int main() {
   
    int a,b;
    printf("Enter an integer:");
    scanf("%d",&a);
    div(a);
    perfect(a,&b);
    if(a==b)
    printf("perfect number.");
    else
    printf("not perfect number.");

    printf("Thanks\n\n");
    return 0;
}