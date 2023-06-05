#include<stdio.h>
#include<stdbool.h> 
int b[10],j=0; 

void raj(int c){
b[j]=c;
j++;
if(j==10){
for(int i=0;i<6;i++){
printf("%d\t",b[i]);
printf("%c\n",b[i]);
}
}
}
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
raj(a[i]);
}
}
