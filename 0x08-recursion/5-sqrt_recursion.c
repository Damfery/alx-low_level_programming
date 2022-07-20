#include "main.h"
int natural_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 0));
}

/**
 * natural_sqrt - Find natural square root.
 * @n: number
 * @i: factor to test
 * Return: natural square root
 */

int natural_sqrt(int n, int i)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i == n / 2)
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt(n, i + 1));
	}
}
