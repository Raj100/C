// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float a,b,c,avg;
    printf("Enter marks in 3 subjects number:");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average sore=%f.\n",avg);
    if(c>60)
    {
                printf("Congratulations you passed the exam.\n");
                if(avg>=95)
                {
                   printf("Grade:Ex.");
                   }
                   else if(avg>=90){
                 printf("Grade:A.");
                   }
                   else if(avg>=80){
                 printf("Grade:B.");
                   }
                   else if(avg>=70){
                 printf("Grade:C.");
                   }
                   else {
                 printf("Grade:D.");
                   }

     
    }
    else
    {
            printf("Sorry to inform but you failed the exam.");

    }



    return 0;
}