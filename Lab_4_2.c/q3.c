#include<stdio.h>
void pow(int p,int q,int *f)
{
    *f=1;
    for(int i=1;i<=q;i++)
    {
        *f*=p;
    }
}
void main(){
    printf("************************************\n");
    printf("Enter a number:");
    int a ,ans,b;
    scanf("%d %d",&a,&b);
    pow(a,b,&ans);
    printf("power(%d^%d)=%d\n",a,b,ans);
    printf("*****************End****************");
}