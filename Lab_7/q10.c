#include<stdio.h>
#include<stdbool.h> 
void main()
{
int a[5][2][3],sum=0,prod=1;
for(int i=0;i<5;i++){
for(int j=0;j<2;j++){
for(int k=0;k<3;k++){
scanf("%d",&a[i][j][k]);
}
}
}
for(int i=0;i<5;i++){
for(int j=0;j<2;j++){
for(int k=0;k<3;k++){
printf("%d\t%p\n",a[i][j][k],&a[i][j][k]);
}
}
}
}
//1 2 3 4 5 6 7 8 
