// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
  float x1,y1,x2,y2,x3,y3,a,b,c;
    printf("Enter x1,y1,x2,y2,x3 and y3 respectively:");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    c=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    printf("%f %f %f\n",a,b,c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
           printf("The triangle is possible.\n");
           if(a==b&&a==c&&b==c)
           {
               printf("Equiateral triangle");
           }
           else if(a==b||b==c||c==a)
           {
               printf("Isosceles triangle.");
           }
           else
           {
                printf("Scalene triangle.");
           }
           
           
    }
    else
    {
         printf("Triangle cannot be formed.");
    }
    

    return 0;
}