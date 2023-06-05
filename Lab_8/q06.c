/*Use DMA to store n number of characters, where n is input from user. Find the
character which is present maximum number of times among the stored characters. If
there is a tie, print all the characters present maximum times.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
int n;
printf("Enter the number of characters:");
scanf("%d",&n);
char *p=(char *)malloc(n*sizeof(char));
for(int i=0;i<n;i++){
  scanf("%c",p+i);
}
int count=0,max=0;
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
  if(ch[j]==ch[i]){
    count+=1;
  }
}
if(count>max){
  max=count;
}
}


for(int i=0;i<n;i++){
  count=0;
  for(int j=i;j<n;j++){
  if(ch[j]==ch[i]){
    count+=1;
  }
  if(max==count){
    printf("%c\n",&ch[i]);
  }
}
return 0;
}
