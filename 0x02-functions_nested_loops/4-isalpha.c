#include "main.h"

/**
 * _isalpla - show if the input is a letter
 * Return: 1 if c is a letter, 0 otherwise
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
