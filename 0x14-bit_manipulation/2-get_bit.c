#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be checked
 * Return: the value of the bit at index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;
	int b;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	a = 1 << index;
	b = n & a;
	b = b >> index;
	return (b);

}
