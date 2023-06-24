#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
**/

int main(void)
{
	int i;
	long int n1, n2, Sum;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 48; i++)
	{
		Sum = n1 + n2;
		printf(", %ld", Sum);
		n1 = n2;
		n2 = Sum;
	}
	printf("\n");
	return (0);
}
