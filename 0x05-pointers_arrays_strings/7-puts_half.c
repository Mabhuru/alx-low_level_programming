#include "main.h"

#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}

	start = length / 2;
	if (length % 2 == 1)
	{
	start++;
	}

	for (i = start; i < length; i++)
	{
	putchar(str[i]);
	}

	putchar('\n');
}

