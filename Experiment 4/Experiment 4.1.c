//Experiment 4.1: WAP to enter numbers till the user wants. //At the
//end, it should display the count of positive, negative, and Zeroes
//entered.
#include
int main{}
{
int num, positive = 0, negative = 0, zero = 0;
char choice;
do { printf("Enter a number: ");
scanf("%d", &num);
if (num > 0) positive++;
else if (num < 0) negative++;
else zero++;
printf("Do you want to enter another number? (y/n): ");
scanf(" %c", &choice);
// note the space before %c to skip newline } while (choice == 'y' ||
choice == 'Y');
printf("\nCount of Positive numbers: %d", positive);
printf("\nCount of Negative numbers: %d", negative);
return 0;
}