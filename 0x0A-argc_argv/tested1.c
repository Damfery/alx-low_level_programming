#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - what it is
 * Return: 0 on success
 * @argc: argument count
 * @argv: argurment vector
 */
int main(int argc, char *argv[])
{
        int add;
	int i;

	add = 0;
	if (argc > 2 || !isdigit(argv[i]))
	{	
		for (i = 1; i < argc; i++)
		{	
			add += atoi(argv[i]);		
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
