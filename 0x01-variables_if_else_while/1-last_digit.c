#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main -  entry point of the program
*
*Description: This program will assign a random
*number to variable n each time it is executed
*
*Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;


printf("Last digit of %d ", n % 10);

if (n & 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n & 10 == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
