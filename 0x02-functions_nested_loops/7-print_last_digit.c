#include "main.h"
/**
 * print_last_digit - prints last digits
 * @n: int to use
 * Return: absolute value
 */
int print_last_digit(int n)
{
	int lastdig;

	if (n < 0)
		lastdig = -1 * (n % 10);
	else
		lastdig = n % 10;
	_putchar ((lastdig) + '0');
	return (lastdig);
}

