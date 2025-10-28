//Experiment 4.4. The population of a town is 100000. The population has increased steadily at the rate of
//10% per year for the last 10 years. Write a program to determine the population at the end
//ofeach year in the last decade. */

#include<stdio.h>
int main()
{
int i, j=100000;
for(i=1; i<11; i++)
{
j=j+(j*0.1);
printf("Population of the town in year %d is: %d\n", i, j);
}
return 0;
}
