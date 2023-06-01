/*Write macro definitions with arguments for calculation of area and perimeter of a
triangle, a square and a circle. Store these macro definitions in a file called “areaperi.h”.
Include this file in your program, and call the macro definitions for calculating area and
perimeter for different squares, triangles, and circles.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "areaperi.h"
int main(){
float a,b,c,r,s;
printf("Enter the sides of Triangle:");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
printf("Enter the radius of Circle:");
scanf("%f",&r);
printf("Enter the sides of Square:");
scanf("%f",&s);
printf("Area of triangle= %0.2f\n",area_tri(a,b,c));
printf("Perimeter of triangle= %0.2f\n",pri_tri(a,b,c));
printf("Area of circle= %0.2f\n",area_circle(r));
printf("Perimeter of circle= %0.2f\n",peri_circle(r));
printf("Area of square= %0.2f\n",area_square(s));
printf("Perimeter of square= %0.2f\n",peri_square(s));

return 0;
}
