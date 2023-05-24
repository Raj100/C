#include<stdio.h>
void sum(int p,int q,int *r)
{    *r=p+q;
}
void main(){
    printf("Enter two integers:");
    int a,b,s;
    scanf("%d %d",&a,&b);
    sum(a,b,&s);
    printf("Sum= %d\n",s);
}