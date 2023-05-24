#include<stdio.h>
#include<stdbool.h> 
void raj(int *c){
for(int i=0;i<15;i++){
printf("%d\t%p \n",*(c+i),c+i);
}

}

void main()
{
int a[15];
printf("Enter 15 elements of array:\n");
for(int i=0;i<15;i++){
scanf("%d",&a[i]);
}
raj(a);
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
