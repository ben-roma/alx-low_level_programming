#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *new_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;

	new_str = (char *)malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		new_str[i] = s2[j];
	}

	new_str[i] = '\0';

	return (new_str);
}

