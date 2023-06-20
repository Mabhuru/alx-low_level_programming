#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of three digits
* Numbers are separated by ", " followed by a space
* The three digits must be different
* e considered the same combination of the three digits 0, 1 and 2
* Print only the smallest combination of three digits
* Numbers are printed in ascending order, with three digits
* Only the putchar function is used (every other function is forbidden)
* Only putchar is used six times maximum
* No variable of type char is used
*
* Return: 0 (Success)
*/
int main(void)
{
int i, j, k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');

if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
