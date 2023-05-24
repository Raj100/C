// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
  int n;
   
    printf("press 1 for addition.\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for bye and exit\n");
     printf("Enter your number :");
    scanf("%d",&n);
    float a,b;
    switch(n){
        case 1:
        printf("Enter 2 numbers :");
        scanf("%f%f",&a,&b);
        printf("Result=%f.",a+b);
        break;
        case 2:
        printf("Enter 2 numbers :");
        scanf("%f%f",&a,&b);
        printf("Result=%f",a-b);
        break;
        case 3:
        printf("Enter 2 numbers :");
        scanf("%f%f",&a,&b);
        printf("Result=%f",a*b);
        break;
        case 4:
        printf("Enter 2 numbers :");
        scanf("%f%f",&a,&b);
        printf("Result=%f",a/b);
        break;
        case 5:
        printf("bye!!!");
        break;
        default:
        printf("wrong choice");
    }
    

    return 0;
}