#include<stdio.h>
#include<stdbool.h>  
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
int k,count=0;
bool flag=1;
printf("Enter the key:");
scanf("%d",&k);
for(int i=0;i<10;i++){
if(k==a[i]){
if(flag)
printf("The key was found in the array at positions");
printf("%d\t",i+1);
count+=1;
flag=0;
}
}
if(flag){
printf("The key was not found in the given array");
}
else
{
printf("%d",count);
}
}
