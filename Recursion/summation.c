// Online C compiler to run C program online
#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return (sum(n-1)+n);
}
int main() {
    // Write C code here
    printf("Hello world");
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));

    return 0;
}