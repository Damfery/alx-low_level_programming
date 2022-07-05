#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */


void times_table(void)
{
	int a, b, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{	mul = a * b;
			if (b == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
