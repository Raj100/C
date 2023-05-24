#include<stdio.h>

int main(){
int a[5],b[5];
printf("Enter the array values:");
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
b[i]=a[i];
}
printf("value of array b is:\n");
for(int i=0;i<5;i++){
printf("%d\t",b[i]);
}

printf("\n");
return 0;
}

