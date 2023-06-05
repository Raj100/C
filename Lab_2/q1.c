// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,sum=0,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=n%10+sum;
        product=(n%10)*product;
        n/=10;
    }
     printf("sum=%d product=%d",sum,product);


    return 0;
}