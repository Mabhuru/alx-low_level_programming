#include "main.h"

/**
 * _strcmp - check 2 strings
 * @s1: one string
 * @s2: another string
 * Return: int the specifies num space inbetween
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));

	else
		return (0);
}
