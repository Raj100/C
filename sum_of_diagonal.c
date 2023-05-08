// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int m[3][3];
    int sum=0;
    printf("Enter a  2 dimensional array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+m[i][j];
            }
             
        }
    }
             printf("%d",sum);
   
    return 0;
}