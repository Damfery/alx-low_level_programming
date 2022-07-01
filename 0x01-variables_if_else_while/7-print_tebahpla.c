#include <stdio.h>

/**
 * main - reverse alphabeths in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
		putchar('\n');
		return (0);
}
