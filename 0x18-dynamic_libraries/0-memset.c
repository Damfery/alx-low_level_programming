#include "main.h"

/**
 * _memset - this fills memories wirh a constant byte.
 * @s: points to memory
 * @b: constant byte
 * @n: no of bytes
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
		while (i < n)
		{
			s[i] = b;
			i++;
		}
	return (s);
}
