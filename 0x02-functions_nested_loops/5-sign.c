#include "main.h"

/**
 * print_sign - Determine if a number is positive or negative or equal 0
 *
 * @n: The input number as an int
 *
 * Return: 1 if positive, 0 if negative, -1 if zero
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
