// add 2 numbers
#include <stdio.h>
int add(int c,int d)
{
    return (c+d);
}
int main() {
    printf("Enter 2 numbers:");
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d\n",add(a,b));

    return 0;
}