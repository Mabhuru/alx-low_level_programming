#include "main.h"

/**
 * cap_string - capitalize first letter of every word
 * @s: string to use in this program
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	/*check the first index for capital*/
	if (s[i] >= 'a' && s[i] <= 'Z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /*iterate thru string*/
	{
		/*if lowercase and prior character is separator, make capital*/
		if ((s[i] >= 'a' && s[i] <= 'Z'
				&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
					s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i = 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
					s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t' ||
					s[i - 1] == '\n')))
					s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
