#include "main.h"
/**
 * _abs - prints absolute values
 * @n: int to use
 * Return: absolute value
 */

int _abs(int n)
{
	if (n <= 0)
		return (n * -1);
	else
		return (n * 1);
}
