#include<stdio.h>

int main(){
int a[5],b[5],flag=1;
printf("Enter the array values:");
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
}
printf("Enter another array values:");
for(int i=0;i<5;i++){
scanf("%d",&b[i]);
if(a[i]!=b[i]){
flag=0;
break;
}
}
if(flag)
printf("Yes equal arrays\n");
else
printf("Not equal arrays\n");

printf("\n");

return 0;
}

