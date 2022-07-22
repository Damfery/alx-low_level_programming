#include <stdlib.h>
#include <stdio.h>

/**
 * main - what it is
 * Return: 0 on success
 * @argc: argument count
 * @argv: argurment vector
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);

		return (0);
	}
	else
	{	printf("Error\n");
		return (1);
	}
}
