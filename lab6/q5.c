#include<stdio.h>
int rec(int);
void nor(int);
int main(){
int n[10];
printf("Enter the value of integer array:");
for(int i=0;i<10;i++){
scanf("%d",&n[i]);
}
float a[10];
printf("Enter the value of floating point array:");
for(int i=0;i<10;i++){
scanf("%f",&a[i]);
}
char b[10];
printf("Enter the value of character array:");
for(int i=0;i<10;i++){
scanf("%c",&b[i]);
}
printf("Integer array:\n");
for(int i=0;i<10;i++){
printf("%d\t",n[i]);
}
printf("\nfloating point array:\n");
for(int i=0;i<10;i++){
printf("%f\t",a[i]);
}
printf("\ncharacter array:\n");
for(int i=0;i<10;i++){
printf("%c\t",b[i]);
}

printf("\n");
return 0;
}

