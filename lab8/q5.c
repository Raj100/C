#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
int n,sum=0,sd=0;
printf("Enter the number of students:");
scanf("%d",&n);
int *p=(int *)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
scanf("%d",p+i);
sum+=*(p+i);
}
sum/=n;
for(int i=0;i<n;i++){
sd+=pow(sum-*(p+i),2);
}
sd=sqrt(sd/n);
printf("Mean= %d\n",sum);
printf("standard deviation= %d",sd);


return 0;
}
