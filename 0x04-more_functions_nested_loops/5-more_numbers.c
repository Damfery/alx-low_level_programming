#include "main.h"

/**
 * print_numbers - this prints all lower alphabet
 *
 * Return: 0 (otherwise)
 */
void print_numbers(void)
{
	char c;
	char j;

	j = 0;
	while (j < 10)
	{	
	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	}
	_putchar(*"\n");
	j++;
}
