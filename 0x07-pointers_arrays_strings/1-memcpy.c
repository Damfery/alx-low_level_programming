#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination add
 * @src: source add
 * @n: number of bytes to copy
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		{
		dest[i] = src[i];
		i++;
		}

	return (dest);
}
