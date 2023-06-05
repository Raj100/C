/*Create a structure to store data on students: Roll number, Name, Department,
Course, Year of joining. Enter data for 5 students – use array of structures.
a. Print names of all students who joined in a particular year.
b. Print the data of a student whose roll number is given.*/
#include<stdio.h>
#include<stdlib.h>
int main(){

struct info{
int r_no;
char name[100];
char dept[100];
char course[100];
int year;
};
struct info s[5];
for(int i=0;i<5;i++){
printf("Enter the roll no,name,department,course and year of joining respectively of %d student\n",i+1);
scanf("%d",&s[i].r_no);
scanf("%s",s[i].name);
scanf("%s",s[i].dept);
scanf("%s",s[i].course);
scanf("%d",&s[i].year);
};
int k;
printf("Enter the year you wish to search:");
scanf("%d",&k);
int *y=(int *)malloc(5*sizeof(int));
for(int i=0;i<5;i++){
if(s[i].year==k){
printf("%s\n",s[i].name);
}
}
int k2;
printf("Enter the roll number you wish to search:");
scanf("%d",&k2);
for(int i=0;i<5;i++){
if(s[i].r_no==k2){
printf("<---Details of roll number %d--->\n",k2);
printf("Name=%s\n",s[i].name);
printf("Department=%s\n",s[i].dept);
printf("Course=%s\n",s[i].course);
printf("Year of joining=%d\n",s[i].year);
k2=1;
break;
}
}
if(k2!=1)
printf("Entered roll number is Invaid.");
return 0;
}
