#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point of the program
*
*Description: This program assigns a random number to var n
*and prints whether the number in n is posotove or negative
*
*Return: 0 on successful completion
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d ", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n");
}

return (0);
}
