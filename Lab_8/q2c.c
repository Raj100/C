#include<stdio.h>
void mimic(char *,char *);
int main(){
char a[100],b[100];
printf("Enter the string:\n");
//scanf("%s",a);
fgets(a,100,stdin);
mimic(b,a);
printf("Entered String using strcpy is %s.\n",a);
printf("Copied String using strcpy is %s.\n",b);
return 0;
}
void mimic(char *target,char *source){
int l;
for(l=0;source[l]!='\0';l++){}
for(int i=0;i<l;i++){
*(target+i)=*(source+i);
}
}
