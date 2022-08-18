#include "main.h"

/**
 * clear_bit - clears the bit at index of a given unsigned int
 * @n: number to be converted
 * @index: index of the bit to be cleared
 * Return: 1 if the bit was cleared, -1 if an error occur.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	int b;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	a = ~(1 << index);
	b = *n & a;
	*n = b;
	return (1);
}
