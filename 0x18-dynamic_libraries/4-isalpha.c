#include "main.h"
/**
 * _isalpha - this prints alphabet
 * @c: prints int
 * Return: 1 if c is lowercase, 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}


