/*Write a program to store identity card numbers – either adhaar card number
(string of size 12) or passport number (string of size 10) using union. Create 2
elements of this union and ask users to choose id details they want to enter, and
store them in these two elements. Display the contents of the elements.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

union identity{
char aadhar[13];
char pass[11];
};
union identity s[2];
for(int i=0;i<2;i++){
int a;
printf("Enter 1 if you have your aadhar number.\n");
printf("Enter 2 to you have your passport number.\n");
scanf("%d",&a);
if(a==1){
printf("Enter your aadhar number:");
scanf("%s",s[i].aadhar);
}
else if(a==2){
printf("Enter your passport number:");
scanf("%s",s[i].pass);
}
else
printf("Invaild choice");
}
printf("%s",s[0]);
printf("%s",s[1]);
return 0;
}
