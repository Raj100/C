#include<stdio.h>

void sumr(float *sumr,int n)
{
int fact=1;
for(int i=1;i<=n;i++){
fact*=i;
*sumr+=(fact/i);
}
}

float sumv(int n)
{int sum=0;
int fact=1;
for(int i=1;i<=n;i++){
fact*=i;
sum+=(fact/i);
}
return sum;
}

void main(){
int n;
printf("A number:");
scanf("%d",&n);
float sumrr=0,sumvv=0;
sumr(&sumrr,n);
printf("%f\n",sumrr);
printf("%f",sumv(n));
}

