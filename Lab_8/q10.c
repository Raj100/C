#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char a[5][100];
printf("Enter the names of students:");
for(int i=0;i<5;i++){
scanf("%s",a[i]);
}

for(int i=4;i>=0;i--){
for(int j=0;j<i;j++){
if((int)a[j][0]>(int)a[j+1][0]){
char temp[100];
strcpy(temp,a[j+1]);
strcpy(a[j+1],a[j]);
strcpy(a[j],temp);
}
}
}

printf("Sorted array:");
for(int i=0;i<5;i++){
printf("%s\t",a[i]);
}

return 0;
}
