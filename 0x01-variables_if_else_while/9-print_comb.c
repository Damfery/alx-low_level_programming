#include <stdio.h>

/**
 * main - combo
 * Return: 0 success
 */
int main(void)
{
	int cmb;

	for (cmb = 0; cmb < 10; cmb++)
	{
		putchar((cmb % 10) + '0');
		if (cmb >= 0 && cmb < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
		putchar('\n');

		return (0);
}
