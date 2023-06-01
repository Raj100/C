/*Write a program to copy
a. All the contents of an existing text file into a new text file.
b. Only the lowercase characters of an existing text file into a new text file.
c. Only the numeric characters of an existing text file into a new text file.
d. All the contents of an existing file into a new file, and while copying,
convert all the uppercase letters to lowercase and lowercase letters to
uppercase.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE* f1=fopen("file1.txt","r");
FILE* f2=fopen("file2.txt","w");
if(f1==NULL||f2==NULL){
printf("Error.");
return 0;
}
char ch=fgetc(f1);
while(ch!=EOF){
if((int)ch>=97&&(int)ch<=122)
fputc((char)((int)ch-32),f2);
else if((int)ch>=65&&(int)ch<=90)
fputc((char)((int)ch+32),f2);
else
fputc(ch,f2);
ch=fgetc(f1);
}
fclose(f1);
fclose(f2);
return 0;
}
