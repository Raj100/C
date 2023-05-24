#include<stdio.h>

int main(){
char a[10],b[10],flag=1;
printf("Enter the array values:");
for(int i=0;i<10;i++){
scanf(" %c",&a[i]);
}
printf("Enter another array values:");
for(int i=0;i<10;i++){
scanf(" %c",&b[i]);
}
printf("AT index:\n");
for(int i=0;i<10;i++){

if(a[i]!=b[i]){
printf("%d\t",i);
flag=0;
}

}

if(flag)
printf("equal arrays\n");


printf("\n");

return 0;
}

