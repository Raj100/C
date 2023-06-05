// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //binary search
    int a[10];
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    int key;
            printf("Enter the key:");
      scanf("%d",&key);

    int m,u=9,l=0;
    while(u>=l){
        m=(u+l)/2;
        if(a[m]==key){
        printf("The element was found.\n");
        break;

        }
        else if(a[m]<key){
            l=m+1;
        }
        else
        u=m-1;
    }
    return 0;
}
