// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
amg(int *a){
    int oa=*a,rev=0;
    while(oa!=0){
        rev+=(oa%10)*(oa%10)*(oa%10);
        oa/=10;
    }
    if(*a==rev)
    *a=1;
    else
    *a=0;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    amg(&n);
    if(n)
    printf("amstrong ys");
    else
    printf("amstrong no");

    return 0;
}