//WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.


#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    int h, p, base;
    if((a>b)&&(a>c))
    {
        h = a;
        p = b;
        base = c;
    }
    else if ((b>a)&&(b>c))
    {
        h = b;
        p = a;
        base = c;
    }
    else
    {
        h = c;
        p = b;
        base = a;
    }

    if(((a+b) > c)||((b+c) > a)||((a+c)>b))
    {
        if((a==c)&&(b==c)&&(a==b))
        {
            printf("The traingle is equilateral ");
        }
        else if((a==b)||(b==c)||(a==c))
        {
            printf("The traingle is Isosceles ");
        }
         else if((h*h) == (p*p) + (base*base))
        {
            printf("The Triangle is Right Angled");
        }
        else
        {
            printf("The Triangle is Scalene");
        }
    }
    return 0;
}