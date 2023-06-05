#include<stdio.h>

int main(){
int n[10]={1,2,3,4,5,6,7,8,9,1000};
float a[10]={1.0,1.2,1.3,4.4,1.5,1.6,7.7,8.8,1.9,100.001450};
char b[10]={'a','s','d','f','g','h','j','k','l','x'};

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

