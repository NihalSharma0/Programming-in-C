//5.4. Declare a static local variable inside a function. Observe how its value persists acrossfunction calls.*/

#include <stdio.h>
void counterFunction()
{
 static int count = 0; // Static local variable
 count++;
 printf("Function called %d times\n", count);
}
int main()
{
 printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
 printf("\n---------------------------------------------------------------------------------\n");
 counterFunction();
 counterFunction();
 counterFunction();
 return 0;
}
