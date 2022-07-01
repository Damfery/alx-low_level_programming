#include <stdio.h>

/**
 * main - 10 numbers and base 16
 * Return: 0 if successful
 */

int main(void)
{
	int n1;
	char c1;

	for (n1 = 0; n1 < 10; n1++)
	putchar((n1 % 10) + '0');

	for (c1 = 'a'; c1 <= 'f'; c1++)
	putchar(c1);
	putchar('\n');

	return (0);
}
