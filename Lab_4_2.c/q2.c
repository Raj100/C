#include<stdio.h>
void factorial(int n,int *f)
{
    *f=1;
    for(int i=1;i<=n;i++)
    {
        *f*=i;
    }
}
void main(){
    printf("************************************\n");
    printf("Enter a number:");
    int a ,ans;
    scanf("%d",&a);
    factorial(a,&ans);
    printf("Factorial=%d\n",ans);
    printf("*****************End****************");
}