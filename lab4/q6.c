
#include <stdio.h>
#include<math.h>
void useless(int *a,int *b,int *c,int *d,int *e)
{ 
    int sum,avg,sd;
    sum=*a+*b+*c+*d+*e;
    avg=sum/5;
    sd=sqrt(pow(avg-*a,2)+pow(avg-*b,2)+pow(avg-*c,2)+pow(avg-*d,2)+pow(avg-*e,2));
    *a=sum;
    *b=avg;
    *c=sd;

}
int main() {
    printf("Enter a number:");
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    useless(&a,&b,&c,&d,&e);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}