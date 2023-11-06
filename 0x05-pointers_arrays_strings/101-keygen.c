#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int index;
	unsigned int seed;

	/* Use the current time as a seed for random number generator */
	seed = time(NULL);
	srand(seed);

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}

	/* Null-terminate the string */
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
