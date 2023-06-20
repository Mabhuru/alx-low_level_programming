#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of two digits
* Numbers are separated by ", " followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers are printed in ascending order, with two digits
* Only the putchar function is used (every other function is forbidden)
* Only putchar is used five times maximum
* No variable of type char is used
*
* Return: 0 (Success)
*/
int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');

if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
