#include<stdio.h>
#include<string.h>
int main(){
char ch[100];
printf("Enter the string:\n");
fgets(ch,100,stdin);
int len=strlen(ch),flag=1;
for(int i=0;i<(len+1)/2;i++){
if(ch[i]!=ch[len-1-i]){
flag=0;
break;
}
}
if(flag){
puts(ch);
printf("is  a palindrome string.");
}
else{
puts(ch);
printf("is not a palindrome string.");
}
return 0;
}
//gets will not work here it will work in online compiler

