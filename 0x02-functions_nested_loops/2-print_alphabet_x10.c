#include "main.h"

/**
 * print_alphabet_x10- this prints all alphabets using print char
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alp;

	int i = 0;

	while (i < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}

			_putchar(*"\n");
			i++;
	}
}
