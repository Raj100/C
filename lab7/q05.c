#include<stdio.h>
#include<stdbool.h>  
void main()
{
int a[10];
printf("Enter 10 elements of array:\n");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(int i=9;i>=0;i--){
for(int j=0;j<i;j++){
if(a[j]>a[j+1]){
int temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
printf("Sorted array:\n");
for(int i=0;i<10;i++){
printf("%d\t",a[i]);
}
// 1 2 5 3 4 7 6 8 9 99















}
