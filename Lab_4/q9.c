
#include <stdio.h>
#include<math.h>
void hello()
{ 
    printf("Hello\n");
}
void age(int a)
{
    if(a>=18)
    {
        printf("Eligible to apply for D.L\n");
    }
    else
    {
        printf("Not Eligible for D.L\n");
    }
}
int raj()
{
    int a=7,b=9;
    return b-a;
}
int hero(int b)
{
    return b-5;
}

int main() {
    hello();

    printf("Enter your age:");
    int a;
    scanf("%d",&a);
    age(a);
    printf("9-7=%d\n",raj());
    printf("your age 5 years ago=%d",hero(a));
    return 0;
}
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