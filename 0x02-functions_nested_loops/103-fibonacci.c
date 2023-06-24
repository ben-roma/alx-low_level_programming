#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
**/

int main(void)
{
	long int n1, n2, Sum, sum;

	n1 = 1;
	n2 = 2;
	Sum = sum = 0;
	while (Sum <= 4000000)
	{
		Sum = n1 + n2;
		n1 = n2;
		n2 = Sum;
		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
