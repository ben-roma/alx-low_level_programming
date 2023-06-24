#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
**/

int main(void)
{
	long int n, pm;

	n = 612852475143;
	for (pm = 2; pm <= n; pm++)
	{
		if (n % pm == 0)
		{
			n /= pm;
			pm--;
		}
	}
	printf("%ld\n", pm);
	return (0);
}
