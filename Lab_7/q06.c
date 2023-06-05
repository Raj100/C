#include<stdio.h>
#include<stdbool.h> 
int b[6],j=0; 
void raj(int c){
b[j]=c;
j++;
if(j==6){
for(int i=0;i<6;i++){
printf("%d\t",b[i]);
}
}
}
void main()
{
int a[6];
printf("Enter 6 elements of array:\n");
for(int i=0;i<6;i++){
scanf("%d",&a[i]);
raj(a[i]);
}
}
