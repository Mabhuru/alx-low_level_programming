#include <stdio.h>

/**
*main - program entry point
*
*Description: prints lowercase alphabet in reverse
*using putchar followed by a new line
*
*Return: 0 (success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);

}
