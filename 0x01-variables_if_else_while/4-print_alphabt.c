#include <stdio.h>
/**
 * main - print alphabeth apart from q and e
 * Return: Always 0 (Success)
 */

int main(void)

{
	char al;

	for (al = 'a'; al <= 'z'; al++)

	{
		if (al == 'e' || al == 'q')
		continue;
	putchar(al);

	}
	putchar('\n');
	return (0);
}
