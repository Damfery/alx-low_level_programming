#include "main.h"

/**
 * print_numbers - this prints all lower alphabet
 *
 * Return: 1 if c is lowercase, 0 (otherwise)
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{		
		_putchar(c);
	}
		_putchar(*"\n");
}

