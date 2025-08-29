//Experiment 2.3 :- Write a C program to find the compund interest


#include <stdio.h>
#include <math.h>  

int main()
{
    float P, R, n, a, b, c, d, result;

    printf("Enter Principal: ");
    scanf("%f", &P);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &R);
    printf("Enter the number of years: ");
    scanf("%f", &n);
    a = 1 + (R / 100);
    b = pow(a, n);
    c = P * b;
    d = c - P;
    result = d;
    printf("The Compound Interest is: %.2f\n", result);
    return 0;
}