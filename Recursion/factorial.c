#include<stdio.h>
int fac(int);
int main(){
	int n;
	printf("Factorial:");
	scanf("%d",&n);
	printf("%d",fac(n));
}
int fac(int n){
	if(n==1)
		return 1;
	else if(n==0)
		return 1;
	else
	return (fac(n-1)*n);
}