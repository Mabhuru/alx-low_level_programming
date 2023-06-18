#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *This is an if_if else program
 *another on here
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("the number is %d ", n);

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
