#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && op[0] == '/') || (num2 == 0 && op[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(op))(num1, num2);
	printf("%d\n", res);
	return (0);
}
