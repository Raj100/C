#include<stdio.h>
#include<stdbool.h> 
int b[10],j=0; 
void raj(int *c){
int sum=0,prod=1;

for(int i=0;i<6;i++){
sum+=*(c+i);
prod*=*(c+i);
}
printf("sum=%d\t",sum);
printf("product=%d\n",prod);
}
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
raj(a);
}
