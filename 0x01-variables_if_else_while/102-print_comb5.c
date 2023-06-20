#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of two two-digit numbers
* Numbers range from 0 to 99
* Numbers are separated by a space
* All numbers are printed with two digits. 1 is printed as 01
* Combinations of numbers are separated by comma, followed by a space
* Combinations are printed in ascending order
* 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
* Only the putchar function is used (every other function is forbidden)
* Only putchar is used eight times maximum
* No variable of type char is used
*
* Return: 0 (Success)
*/
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');

if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
