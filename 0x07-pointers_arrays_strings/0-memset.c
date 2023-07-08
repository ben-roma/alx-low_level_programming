#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @b: memory address to print
 * @s: pointer to memory area
 * @n: memory size to print
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* set pointer address to variable s */
	char *p = s;

	/* iterate through character in memory address till size n */
	while (n--)
	{
		/* append character in memory to buffer with each iter */
		*p++ = (unsigned char)b;

	}
	return (s); /* return copied memory */
}
