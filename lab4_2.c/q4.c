#include<stdio.h>
void prime(int p,int *r)
{
    if(p==0||p==1)
    *r=5;
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        {
            *r=0;
            break;
        }
    }
}
void main(){
    printf("************************************\n");
    printf("Enter a number:");
    int a ,ans=1;
    scanf("%d",&a);

    prime(a,&ans);
    
    if(ans==1)
    printf("%d is a prime number.\n",a);
    else if(ans=0)
    printf("%d is not a prime number.\n",a);
    else
    printf("%d is neither prime nor composite number.\n",a);
    printf("*****************End****************");
}