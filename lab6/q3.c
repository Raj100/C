#include<stdio.h>
int rec(int);
int nor(int);
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
printf("%d term of fibonacci series using iteration function: %d\n",n,nor(n));
printf("%d term of fibonacci series using recursion: %d\n",n,rec(n));
return 0;
}

int rec(int a){
if(a==1){
return 0;
}
else if(a==2){
return 1;
}
else
return rec(a-2)+rec(a-1);
}

int nor(int b){
int c=0,d=1,e=1;
if(b==1)
return 0;
if(b==2)
return 1;
for(int i=3;i<=b;i++){
e=c+d;
c=d;
d=e;
}
return e;
}
