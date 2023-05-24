// factorial
#include <stdio.h>
void amg(int c)
{ 
    int p=0;
    int oc=c;
    while (c!=0)
    {
        int d=c%10;
        p=p+(d*d*d);
        c/=10;   
    }
    if(oc==p){
    printf("Amstrong number.");
    }
    else{
        printf("not amgstrong number.");
    }
    return;
    
}
int main() {
    printf("Enter a number:");
    int a;
    scanf("%d",&a);
    amg(a);
    return 0;
}