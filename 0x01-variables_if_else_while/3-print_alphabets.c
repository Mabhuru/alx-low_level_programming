#include <stdio.h>

/**
*main - entry point of program
*
*Description: prints the alphabet in lowercase
*and then uppercase using putchar
*
*Return: 0 on succesful compilation
*/
int main(void)
{
char lowercaseLetter, uppercaseLetter;

for (lowercaseLetter = 'a'; lowercaseLetter <= 'z'; lowercaseLetter++)
{
putchar(lowercaseLetter);
}

for (uppercaseLetter = 'A'; uppercaseLetter <= 'Z'; uppercaseLetter++)
{
putchar(uppercaseLetter);
}

putchar('\n');

return (0);

}
