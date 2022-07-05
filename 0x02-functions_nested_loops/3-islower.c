#include "main.h"

/**
 * _islower - this prints all lower alphabet
 * @c: prints int
 * Return: 1 if c is lowercase, 0 (otherwise)
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
