
#include <stdio.h>
#include<math.h>
void useless(float *a)
{ 
    float area,cir;
    area= M_PI**a**a;
    cir=2*M_PI**a;
    *a=area;
    printf("circumference=%f\n",cir);

}
int main() {
    printf("Enter radius:");
    float a;
    scanf("%f",&a);
    useless(&a);
    printf("%f",a);
    return 0;
}