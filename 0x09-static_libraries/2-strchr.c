#include "main.h"

/**
 * _strchr - detects char in str
 * @s: pointer for string
 * @c: char to detect
 * Return: char*
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *k;

	while (s[i] >= 0)
	{
		if (s[i] == c)
		{
			k = &s[i];
			break;
		}
		else
		{
			k = 0;
		}
	i++;
	}

	return (k);
}

