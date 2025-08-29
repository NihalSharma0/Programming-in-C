//Write a C program to add two numbers, take number from user


#include <stdio.h>
int main()
{
int a,b;
   printf("Enter the value of 'a' and 'b': ");
   scanf("%d%d", &a, &b);
   int c = a+b;
   printf("the sum of 'a' and 'b' is %d", c);
   return 0;
}

