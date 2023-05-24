// amstrong
#include <stdio.h>
int am(int c)
{ 
    int p=1;
    for(int i=2;i<c;i++)
    {
        if(c%i==0)
        {
            printf("it is not a prime number.\n");
            
            return;

        }
        
    }
    printf("It is a prime number.");
    return 0;
    
}
int main() {
    printf("Enter a number:");
    int a;
    scanf("%d",&a);
    prime(a);
    printf("\n");

    return 0;
}