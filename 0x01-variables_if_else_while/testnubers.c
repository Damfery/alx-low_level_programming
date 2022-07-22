#include <stdio.h>
/**
 * int - main
 * Return: 0
 */

int main(void)
{
	char num;
	char c;

	c = '9';
	for (num = '0'; num <= '8'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
		putchar(c);
	putchar('\n');
	return (0);
}
