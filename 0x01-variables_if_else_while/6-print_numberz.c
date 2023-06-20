#include <stdio.h>

/**
*main - entry of the program
*
*Description: prints single digit numbers
*of base 10 from 0 using putchar
*
*Return: 0 (sucess)
*/
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
}

putchar('\n');

return (0);

}
