//Experiment2.1:- WAP a C program to calculate the area and perimeter of a rectangle based on its length and width

#include <stdio.h>
int main()
{
 int a,b;
    printf("Enter a numeric value of 'a': ");
    scanf("%d", &a);
    printf("Enter a number value of 'b': ");
    scanf("%d", &b);
    int u = 2*(a+b);
    int v = a*b;
    printf("the perimeter of the rectangle is: %d\n", u);
    printf("the area of the rectangle is: %d\n", v);
    return 0;
}
 