#include<stdio.h>
#include<string.h>
int main(){
char ch[100];
printf("Enter the string:\n");
scanf("%s",ch);
fgets(ch,100,stdin);
int len=strlen(ch),flag=1;
for(int i=0;i<(len+1)/2;i++){
if(ch[i]!=ch[len-1-i]){
flag=0;
break;
}
}
if(flag){
printf("%s is a palindrome string.",ch);
}
else{
printf("%s is not a palindrome string.",ch);
}
return 0;
}

