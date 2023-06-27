#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Generates random valid passwords for "101-crackme" program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	int index = rand() % (sizeof(valid_chars) - 1);

	password[i] = valid_chars[index];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}

