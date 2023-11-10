#include "3-calc.h"
#include <stdio.h> 
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    char *operator;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);

    op_func = get_op_func(operator);
    if (!op_func || operator[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", op_func(num1, num2));
    return (0);
}
