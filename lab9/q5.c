/*Write a program to append the contents of an existing text file into another
existing text file.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *f1=fopen("file1.txt","r");
FILE *f2=fopen("file2.txt","a");
char ch=fgetc(f1);
while(ch!=EOF){
putc(ch,f2);
ch=getc(f1);
}
fclose(f1);
fclose(f2);
return 0;
}
