#include<stdio.h>
#include<stdbool.h> 
void raj(float *c){
float sum=0;
for(int i=0;i<10;i++){
sum+=*(c+i);
}
printf("sum of all elements of array=%.2f",sum);
}

void main()
{
float a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%f",&a[i]);
}
raj(a);
}
