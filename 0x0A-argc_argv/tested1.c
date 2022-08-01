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
	int i = 1;

	add = 0;
	for (i = 1; i < argc; i++)
		while (argc > 2)
		{	
			if (argv[i] >= 'a' && argv[i] <= 'z')
				break;
			printf("Error\n");
			return (1);
		}
	add += atoi(argv[i]);		
	printf("%d\n", add);
	return (0);
}
