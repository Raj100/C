#include<stdio.h>
int rec(int);
void nor(int);
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Fibonacci series using iterations:\n");
nor(n);
printf("\nfibonacci series using recursion:\n");
for(int i=1;i<=n;i++){
printf("%d\t",rec(i));
}
printf("\n");
return 0;
}

int rec(int a){
if(a==1){
return 0;
}
else if(a==2){
return 1;
}
else{
printf("%d\n",rec(a-2)+rec(a-1));
return rec(a-2)+rec(a-1);
}
}

void nor(int b){
int c=0,d=1,e=1;
printf("0\t1\t");
for(int i=3;i<=b;i++){
e=c+d;
c=d;
d=e;
printf("%d\t",e);
}
}
