#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - calculates the modulo of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}
