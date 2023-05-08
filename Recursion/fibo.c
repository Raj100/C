#include<stdio.h>
int fac(int);
int main(){
    int n;
    scanf("%d",&n);
    fib(n);
}
int fib(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    return (fib(n-1)+fib(n-2));
}