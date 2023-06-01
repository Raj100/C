#include<stdio.h>
#include<math.h>
float print_bits(int a){
int i=1;
while(a!=1){
if(a%2==0){
i=i*10;
}
else{
i=i*10+1;;
}
a/=2;
}
printf("%d",i);
}

void main(){
printf("Enter a number");
int a;
scanf("%d",&a);
print_bits(a);

}

