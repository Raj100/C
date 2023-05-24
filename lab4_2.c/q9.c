
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
