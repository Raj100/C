
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
  int a1,a2,a3,a4,a5,a6,a7,a8;
   
    
     printf("Enter your number :");
    scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
    if(a1!=a2&&a2==a3)
    {
        printf("The 1st element of value %d is the unique distinct value",a1);
    }
    else if(a1!=a2)
    {
        printf("The 2nd element of value %d is the unique distinct value",a2);
    }
    else if(a1!=a3)
    {
        printf("The 3rd element of value %d is the unique distinct value",a3);
    }
     else if (a1!=a4)
    {
        printf("The 4th element of value %d is the unique distinct value",a4);
    }
     else if (a1!=a5)
    {
        printf("The 5th element of value %d is the unique distinct value",a5);
    }
     else if (a1!=a6)
    {
        printf("The 6th element of value %d is the unique distinct value",a6);
    }
     else if (a1!=a7)
    {
        printf("The 7th element of value %d is the unique distinct value",a7);
    }
     else if (a1!=a8)
    {
        printf("The 8th element of value %d is the unique distinct value",a8);
    }
     else 
    {
        printf("All same");
    }
    return 0;
}