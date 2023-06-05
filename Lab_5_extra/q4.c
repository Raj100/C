#include<stdio.h>
#include<math.h>

void print_bits(int a){
int i=1,b=0;
while(a!=0){
  b+=(a%2)*i;
i=i*10;
a/=2;
}
printf("%d",b);
}

int main(){
printf("Enter a number");
int a;
scanf("%d",&a);
print_bits(a);
return 0;
}
