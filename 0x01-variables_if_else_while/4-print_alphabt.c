#include <stdio.h>

/**
*main - entry point
*
*Description: prints the alphabet in lowercase
*excluding letters 'q' and 'e'
*followed by a new line using putchar
*
*Return: 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}

putchar('\n');

return (0);

}
