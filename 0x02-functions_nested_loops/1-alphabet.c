#include "main.h"

/**
 * main - print using puts
 * Return: Always 0 (Success)
 */

int main (void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
	       	}
		_putchar(*"\n");
	return (0);
}
