#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
printf("Enter the number of students:");
    scanf("%d",&n);
    int *p=malloc( n*sizeof(int));
    int a[n],sum=0;
    printf("Enter the marks of %d students:",n);

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
}

printf("%d",sum);
	return 0;
}
