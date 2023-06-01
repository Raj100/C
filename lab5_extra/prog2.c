#include<stdio.h>
int per(int);
int perr(int a,int *b){
int sum=0;
for(int i=1;i<a;i++){
if(a%i==0)
sum+=i;
}
if(sum==a)
*b=1;
else 
*b=0;
}
void main(){
printf("Enter a number");
int a;
scanf("%d",&a);

if(per(a))
printf("%d is a perfect number",a);
else
printf("Not a perfect number.");
int s;
perr(a,&s);
if(s)
printf("%d is a perfect number",a);
else
printf("Not a perfect number.");
}

int per(int a){
int sum=0;
for(int i=1;i<a;i++){
if(a%i==0)
sum+=i;
}
if(sum==a)
return 1;
else 
return 0;
}
