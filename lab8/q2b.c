#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[1];
printf("Enter the string:\n");
scanf("%s",a);
strcpy(b,a);
printf("Entered String using strcpy is %s.\n",a);
printf("Copied String using strcpy is %s.\n",b);
//it does not give any error
//if at all it gives it should out of bound error or system crash
return 0;
}
