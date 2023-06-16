#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the size of various types
 * (char, int, float, and double) on the computer it is compiled and run on.
 * It uses the printf function to display the size in bytes.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));

return (0);
}
