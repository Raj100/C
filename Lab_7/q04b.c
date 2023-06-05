#include<stdio.h>
#include<stdbool.h>  
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
int k,l=0,u=9,m;
bool flag=1;
printf("Enter the key:");
scanf("%d",&k);

while(l<=u){
m=(u+l)/2;
if(k==a[m]){
printf("The key was found at %dth position of the array.",m+1);
flag=0;
break;
}
else if(k>a[m]){
l=m+1;
}
else{
u=m-1;
}
}
if(flag){
printf("The key was not found in the given array.");
}
}
