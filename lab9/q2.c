/*To store date use structure called st_date, that contains three members namely
date (int), month (string of size 4 including NULL) and year (int).
a. Create two elements of this datatype.
b. Write a program that compares two given dates. If the dates are equal then
display message as "Equal" otherwise "Unequal".*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

struct st_date{
int date;
char month[5];
int year;
};
struct st_date s[2];
for(int i=0;i<2;i++){
printf("Enter the date,month and year respectively of %d element\n",i+1);
scanf("%d",&s[i].date);
scanf("%s",s[i].month);
scanf("%d",&s[i].year);
};

int flag=1;
if(s[0].date==s[1].date){
flag=0;
}
if(!strcomp(s[0].date,s[1].date){
flag=0;
}
if(s[0].year==s[1].year){
flag=0;
}
if(flag){
printf("Equal");
}
else
printf("Unequal");
return 0;
}
