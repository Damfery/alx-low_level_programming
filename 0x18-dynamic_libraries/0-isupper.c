#include "main.h"

/**
 * _isupper - prints uppercase
 * @c: character
 * Return: 0 if lower and 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
