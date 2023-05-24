
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
  char ch;
   
    
     printf("Enter your number :");
    scanf("%c",&ch);
 
    switch(ch){
        case '0':
        printf("Coresponding lower case :  a");
        break;
        case '1':
        printf("Coresponding lower case :  b");
        break;
        case '2':
        printf("Coresponding lower case :  c");
        break;
        case '3':
        printf("Coresponding lower case :  d");
        break;
        case '4':
        printf("Coresponding lower case :  e");
        break;
        case '5':
        printf("Coresponding lower case :  f");
        break;
        case '6':
        printf("Coresponding lower case :  g");
        break;
        case '7':
        printf("Coresponding lower case :  h");
        break;
        case '8':
        printf("Coresponding lower case :  i");
        break;
        case '9':
        printf("Coresponding lower case :  j");
        break;
        default:
        printf("wrong choice");
    }
    

    return 0;
}

