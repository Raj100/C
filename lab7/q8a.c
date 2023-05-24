#include<stdio.h>
#include<stdbool.h> 
void raj(int *c){
int s=*c;
for(int i=0;i<8;i++){
if(*(c+i)<s)
s=*(c+i);
}

printf("Smallest integer:%d\n",s);
}

void main()
{
int a[8];
printf("Enter 8 elements of array:\n");
for(int i=0;i<8;i++){
scanf("%d",&a[i]);
}
raj(a);
}
//1 2 3 4 5 6 7 8 
