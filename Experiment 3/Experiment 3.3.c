#include <stdio.h>

int main()
{
    float h, w;
    printf("Enter your weight in kgs: ");
    scanf("%f", &w);
    printf("Enter your height in meters: ");
    scanf("%f", &h);
    float bmi = (w/(h*h));
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 15)
    {
        printf("Starvation");
    }
    else if (bmi > 15.1 && bmi < 17.5)
    {
        printf("Anorexic");
    }
    else if (bmi > 17.6 && bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi > 18.6 && bmi < 24.9)
    {
        printf("Ideal");
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        printf("Overweight");
    }
    else if ( bmi > 30 && bmi < 39.9)
    {
        printf("Obese");
    }
    else if (bmi > 40)
    {
        printf("Morbidly Obese");
    }
    else
    {
        printf("Invalid weight or height");
    }
    return 0;

}