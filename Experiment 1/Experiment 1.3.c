//Experiment 1.3:- Write a C-program to perform 4 types of arithmetic operations b/w 2 variables. 


#include <stdio.h> 

  

int main() { 

    int a,b; 
    printf("Enter the value of a"); 
    scanf("%d",&a); 
    printf("Enter the value of b"); 
    scanf("%d",&b); 
    int c=a+b; 
    printf("%d\n",c); 
    int d=a-b; 
    printf("%d\n",d); 
    int e=a*b; 
    printf("%d\n",e); 
    float f=a/b; 
    printf("%d\n",f); 
    return 0; 

} 