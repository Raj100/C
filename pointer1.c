#include<stdio.h> 

int main(){
    int a,*n,b;
    int c[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&c[i]);
    }
    n=&c[0];
    
    for(int i=0;i<10;i++)
    {
        printf("%d\t",*n);
        n+=1;
    }
     return 0;
}