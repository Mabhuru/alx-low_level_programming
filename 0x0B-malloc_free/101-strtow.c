#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || strlen(str) == 0)
		return NULL;

	int i, j, wordCount = 0, wordLength = 0;
	char **words = NULL;

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordCount++;
	}

	/* Allocate memory for the words array */
	words = malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
		return NULL;

	/* Extract words from the string */
	i = 0;
	while (str[i] != '\0')
	{
		/* Skip leading spaces */
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		/* Count the length of the current word */
		wordLength = 0;
		j = i;
		while (str[j] != '\0' && str[j] != ' ')
		{
			wordLength++;
			j++;
		}

		/* Allocate memory for the word */
		words[wordCount - 1] = malloc((wordLength + 1) * sizeof(char));

		if (words[wordCount - 1] == NULL)
		{
			/* Free memory allocated so far */
			for (j = 0; j < wordCount - 1; j++)
				free(words[j]);
			free(words);
			return NULL;
		}

		/* Copy the word into the array */
		strncpy(words[wordCount - 1], str + i, wordLength);
		words[wordCount - 1][wordLength] = '\0';

		/* Move to the next word */
		wordCount--;
		i = j;
	}

	/* Set the last element of the words array to NULL */
	words[wordCount] = NULL;

	return words;
}
