#include<stdio.h>
#include<stdbool.h> 
void main()
{
int a[5];
printf("Enter 5 elements of array:\n");
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
}

for(int i=0;i<5;i++){
if(i-1>=0)
printf("%d",a[i-1]);
else
printf("%d",a[5-i-1]);
}
}
