#include <stdio.h>

/**
 * main - double digits
 * Return: 0 success
 */
int main(void)
{
	int cmb;

	for (cmb = 0; cmb < 99; cmb++)
	{
		int cmb2;

		for (cmb2 = cmb + 1; cmb2 < 100; cmb2++)

		{
			putchar((cmb / 10) + '0');
			putchar((cmb % 10) + '0');
			putchar(' ');
			putchar((cmb2 / 10) + '0');
			putchar((cmb2 % 10) + '0');
			if (cmb != 98)
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
