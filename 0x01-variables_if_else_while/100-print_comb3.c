#include <stdio.h>

/**
 * main - combo 2 numbers
 * Return: 0 if successful
 */
int main(void)
{
	int cmb;

	for (cmb = 0; cmb < 9; cmb++)
	{
		int cmb2;

		for (cmb2 = cmb + 1; cmb2 < 10; cmb2++)
		{
			putchar((cmb % 10) + '0');
			putchar((cmb2 % 10) + '0');
			if (cmb != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
