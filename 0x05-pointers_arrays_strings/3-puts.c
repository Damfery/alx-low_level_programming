#include "main.h"
#include <string.h>
/**
 * _puts - print string
 * @str: letters to be printed
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
