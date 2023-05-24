// factorial
#include <stdio.h>
int fac(int c)
{ 
    int p=1;
    for(int i=1;i<=c;i++)
    {
        p*=i;
    }
    return (p);
}
int main() {
    printf("Enter number:");
    int a;
    scanf("%d",&a);
    
    printf("%d\n",fac(a));

    return 0;
}