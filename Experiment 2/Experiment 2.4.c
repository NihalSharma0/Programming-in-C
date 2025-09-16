//Experiment 2.4:- find the roots of the quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x1, x2;
    printf("Enter the value of a,b,c: ");
    scanf("%lf, %lf, %lf", &a, &b, &c);
    double t1 = ((b*b) - (4*a*c));
    double s = sqrt (t1);
    x1 = (-b+s)/(2*a);
    x2 = (-b-s)/(2*a);

    printf("Root1: %lf", x1);
    printf("\nRoot2: %lf", x2);
    return 0;
}
