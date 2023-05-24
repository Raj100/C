#include<stdio.h>
#include <math.h>


void funcA(float *n){
float a=*n;
n+=1;
*n=ceilf(a);
n+=1;
*n=floor(*n);
}

void main()
{
float a[3];
printf("Enter a number:");
scanf("%f",&a[0]);
funcA(a);
printf("upper value of the number:%f\n",a[1]);
printf("lower value of the number:%f\n",a[2]);

}
