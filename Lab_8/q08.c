//a program to sort all the elements of a 4 x 4 float matrix using pointer notation.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  float p[4][4];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      scanf("%f",&p[i][j]);
    }
  }
  float *a = &p[0][0];
for(int i=0;i<15;i++){
  for(int j=0;j<14-i;j++){
    if(*(a+j)>*(a+1+j)){
      float temp=*(a+j);
      *(a+j)=*(a+j+1);
      *(a+j+1)=*(a+j);
    }
  }
}
for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
    printf("%f\t",p[i][j]);
  }
  printf("\n");
}
return 0;
}
