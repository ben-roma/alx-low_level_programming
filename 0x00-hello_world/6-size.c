#include <stdio.h>

/**
 *main - Entry poiny for the progarmme
 *Return: 0  if there isn't error
*/

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
