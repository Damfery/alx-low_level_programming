#include "main.h"
#include <math.h>
/**
 * _pow_recursion - raises to the power of an int
 * @x: int
 * @y: int pow
 * Return: program to return -1 if y < 0;
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{	
		return (x * _pow_recursion(x, y - 1));
	}
}
