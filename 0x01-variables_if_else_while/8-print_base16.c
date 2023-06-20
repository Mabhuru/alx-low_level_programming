#include <stdio.h>

/**
*main - entry point
*
*Description: prints all numbers of base 16(hexadecimal)
*in lowercase followed by a new line using putchar
*
*Return: 0 (success)
*/
int main(void)
{
int n;

for (n = 0; n < 16; n++)
{
if (n < 10)
{
putchar(n + '0');
}
else
{
putchar(n - 10 + 'a');
}
}

putchar('\n');

return (0);

}
