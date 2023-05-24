#include<stdio.h>

int rlen(char *p){
int i;
for(i=0;*(p+i)!='\0';i++){
}
return i;
}

char* rcat(char *a,char *b){
int l1=rlen(a);
int l2=rlen(b);
for(int i=l1;i<(l1+l2);i++){
a[i]=b[i-l1];
}
return a;
}

int rcmp(char *a,char *b){
int l1=rlen(a);
int l2=rlen(b),flag=1;
if(l1==l2){
for(int i=0;i<l1;i++){
if(a[i]!=b[i]){
flag=0;
break;}
}
}
else
return 0;
return flag;
}


int main(){
char a[100],b[100];
printf("Enter 1st string:\n");
scanf("%s",a);
printf("Enter 2nd string:\n");
scanf("%s",b);
printf("length of 1st string =%d",rlen(a));
if(rcmp){
printf("\n1st and 2nd are equal strings.");
}
else
printf("\n1st and 2nd are unequal strings.");



//hack printf("concatination of 1st and 2nd string = %s%s",a,b);
printf("concatination of 1st and 2nd string = %s",rcat(a,b));

return 0;
}

