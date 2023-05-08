// Online C compiler to run C program online
#include <stdio.h>
int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return (fibo(n-1)+fibo(n-2));
}
int main() {
    // Write C code here
    printf("Enter the value of n:");
    int n;
    scanf("%d",&n);
    printf("Nth term of fibonacci series =%d",fibo(n));

    return 0;
}





//0 1 1 2 3  5 8 13 