/*. Declare an integer array with name A of size 20 and populate it with user inputs,
using the base address and pointer arithmetic to access array elements.
a. Find all the even elements and store them in a separate array called a_even[].
b. Find all the odd elements and store them in a separate array a_odd[].
c. Sort these two arrays in ascending order.
d. Create another array with name B of size 20 and populate this array from
a_even[] and a_odd[] such that all the elements in B are in ascending order.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
int a_even[20],a_odd[20],a[20],odd_c=0,even_c=0;
printf("Enter the elements of the array:\n");
for(int i=0;i<20;i++){
  scanf("%d",&a[i]);
  if(a[i]%2==0){
  a_even[even_c]=a[i];
  even_c++;
  }
  else{
  a_odd[odd_c]=a[i];
  odd_c++;
  }
}
for(int i=even_c-1;i>=0;i--){
  for(int j=0;j<i;j++){
    if(a_even[j]>a_even[j+1]){
      int temp=a_even[j];
      a_even[j]=a_even[j+1];
      a_even[j+1]=temp;
    }
  }
}
printf("Even array:\n");
for(int i=0;i<even_c;i++){
  printf("%d\t",a_even[i]);
}
for(int i=odd_c-1;i>0;i--){
  for(int j=0;j<i;j++){
    if(a_odd[j]>a_odd[j+1]){
      int temp=a_odd[j];
      a_odd[j]=a_odd[j+1];
      a_odd[j+1]=temp;
    }
  }
}
printf("\nOdd array:\n");
for(int i=0;i<odd_c;i++){
  printf("%d\t",a_odd[i]);
}
int b[20];
for(int i=0;i<20;i++){
  if(i<even_c){
    b[i]=a_even[i];
    }
  else{
    b[i]=a_odd[i-odd_c];
  }
}
for(int i=19;i>0;i--){
  for(int j=0;j<i;j++){
    if(b[j]>b[j+1]){
    int temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
  }
  }
}
printf("\nArray B:\n");
for(int i=0;i<20;i++){
  printf("%d\t",b[i]);
}
return 0;
}
