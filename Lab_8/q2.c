#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100];
printf("Enter the string:\n");
scanf("%s",a);
strcpy(b,a);
printf("Entered String using strcpy is %s.\n",a);
printf("Copied String using strcpy is %s.\n",b);
return 0;
}
