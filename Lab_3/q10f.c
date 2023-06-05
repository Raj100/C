#include <stdio.h>
#include <math.h>
void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {

            printf(" ");
        }
        for (int k = 1; k <= 5; k++)
        {
            if (k == i)
            {
                for(int l=0;l<=k;l++){
                
                
                if(l%2==0)
                 printf(" ");
                else
                printf("%d", k);
            
                
                }
            }
        }
        printf("\n");
    }
}