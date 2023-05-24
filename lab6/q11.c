#include<stdio.h>
int rec(int);
int main(){
int n;
scanf("%d",&n);
printf("%d",rec(n));
printf("\n");

return 0;
}





int rec(int n){
if(n==0)
return 1;

if(n%2==0){
return 1+rec(n)*10; 
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             else
return rec(n)*10;
}
