#include<stdio.h>
#include<string.h>
int main(){
char a[100];
printf("Enter the string:\n");
//scanf("%s",a);
fgets(a,100,stdin);

for(int i=0;a[i]!='\0';i++){
if((int)a[i]>=97&&(int)a[i]<=122)
a[i]=(char)((int)a[i]-32);
}
printf("Entered String in upper case is %s",a);
return 0;
}
