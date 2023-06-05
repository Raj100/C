#include<stdio.h>

int main(){
int n[10],pe=0,po=0,ne=0,no=0,o=0;
printf("Enter the array values:");
for(int i=0;i<10;i++){
scanf("%d",&n[i]);
if(n[i]>0&&n[i]%2==0)
pe+=1;
else if(n[i]>0&&n[i]%2!=0)
po+=1;
else if(n[i]<0&&n[i]%2!=0)
no+=1;
else if(n[i]<0&&n[i]%2==0)
ne+=1;
else 
o+=1;
}

printf("positive even: %d\n",pe);
printf("positive odd: %d\n",po);
printf("negative odd: %d\n",no);
printf("negative even: %d\n",ne);
printf("zeros: %d\n",o);


printf("\n");
return 0;
}

