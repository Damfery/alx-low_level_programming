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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
