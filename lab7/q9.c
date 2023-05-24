#include<stdio.h>
#include<stdbool.h> 
void main()
{
int a[4][5],sum=0,prod=1;
for(int i=0;i<4;i++){
printf("Enter elements of %d th row:\n",i+1);
for(int j=0;j<5;j++){
scanf("%d",&a[i][j]);
sum+=a[i][j];
prod*=a[i][j];
}
}
for(int i=0;i<4;i++){
printf("%d th row elements:\n",i+1);
for(int j=0;j<5;j++){
printf("%d\t%p\n",a[i][j],&a[i][j]);
}
}
printf("Sum of all elements=%d \n",sum);
printf("Product of all elements=%d \n",prod);
}
//1 2 3 4 5 6 7 8 
