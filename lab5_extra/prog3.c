#include<stdio.h>
#include<math.h>
float raj(int x1,int y1,int x2,int y2,int x3,int y3){
float a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
float b=sqrt(pow(x2-x3,2)+pow(y3-y2,2));
float c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
if(a==sqrt(b*b+c*c))
{printf("It is a right angle triangle.");
return atan(b/c);
}
else if(b==sqrt(a*a+c*c)){
printf("It is a right angle triangle.");
return atan(a/c);
}
else if(c==sqrt(b*b+a*a)){
printf("It is a right angle triangle.");
return atan(a/b);
}
else{
printf("It not a right angle triangle");
}

}

void main(){
printf("Enter a number");
int a,b,c,d,e,f;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
printf("%f is the angle",raj(a,b,c,d,e,f));

}

