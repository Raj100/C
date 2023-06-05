#include<stdio.h>
int rec(int);
int nor(int);
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Sum of %d natural numbers using iteration function: %d\n",n,rec(n));
printf("Sum of %d natural numbers using recursion: %d\n",n,nor(n));
return 0;
}

int rec(int a){
if(a==1){
return 1;
}
return a+rec(a-1);
}

int nor(int b){
int sum=0;
for(int i=1;i<=b;i++){
sum+=i;
}
return sum;
}
