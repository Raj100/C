#include<stdio.h>
int main(){
char ch[100];
printf("Enter the string:\n");
scanf("%s",ch);
int l,flag=1;
for(l=0;ch[l]!='\0';l++){}
for(int i=0;i<(l+1)/2;i++){
if(ch[i]!=ch[l-1-i]){
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

