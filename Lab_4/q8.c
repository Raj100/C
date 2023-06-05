
#include <stdio.h>
#include<math.h>
void greater(float *a,float *b)
{ 
    if(*a>*b)
    {
        return;
    }
    else{
        *a=*b;
    }
}
int main() {
    printf("Enter 2 number:");
    float a,b;
    scanf("%f %f",&a,&b);
    greater(&a,&b);
    printf("%0.1f",a);
    return 0;
}