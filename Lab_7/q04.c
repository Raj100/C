#include<stdio.h>
#include<stdbool.h>  
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
int k;
bool flag=1;
printf("Enter the key:");
scanf("%d",&k);
for(int i=0;i<10;i++){
if(k==a[i]){
printf("The key was found at %dth position of the array",i+1);
flag=0;
}
}
if(flag){
printf("The key was not found in the given array");
}
}
