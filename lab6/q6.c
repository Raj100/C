#include<stdio.h>

int main(){
float n[6];
float avg=0;
printf("Enter the marks:");
for(int i=0;i<6;i++){
scanf("%f",&n[i]);
avg=avg+n[i];
}

avg/=6;
printf("Average marks: %f\n",avg);


printf("\n");
return 0;
}

