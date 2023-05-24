
#include <stdio.h>
#include<math.h>
void sum(int n,int *ans)
{ 
    int p=0;
    for(int i=1;i<=n;i++)
    {
        p+=i;
    }
    *ans=p;
}
void num(int n)
{
    for(int i=0;i<=n;i++)
    {
        
    printf("%d\t",i);
    }
    printf("\n");
}

void prod(int n,int *ans)
{int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=i;
    }
    *ans=p;
}

int main() {
    for(;;)
    {
    int a,p,q,r;
    printf("Enter an integer(0 for exit):");
    scanf("%d",&a);
    if(a==0)
    break;
    num(a);
    sum(a,&q);
    prod(a,&r);
    printf("sum=%d\n",q);
    printf("product=%d\n",r);
    }
  
    printf("Thanks\n\n");
    return 0;
}