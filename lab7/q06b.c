#include<stdio.h>
#include<stdbool.h> 
void raj(int *c){
for(int i=0;i<6;i++){
printf("%d\t",*(c+i));
}
}

void main()
{
int a[6];
printf("Enter 6 elements of array:\n");
for(int i=0;i<6;i++){
scanf("%d",&a[i]);
}
raj(a);
}
