// factorial
#include <stdio.h>
int power(int c,int d)
{ 
    int p=1;
    for(int i=1;i<=d;i++)
    {
        p*=c;
    }
    return (p);
}
int main() {
    printf("Enter base and its power respectively:");
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d\n",power(a,b));

    return 0;
}