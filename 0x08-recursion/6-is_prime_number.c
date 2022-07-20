#include "main.h"
/**
 * is_prime_number - check if n is a prime number
 * @n: test number
 * Return: 1 if prime, 0 if non prime
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0
			|| n % 6 == 0 || n % 7 == 0 || n % 8 == 0 || n % 9 == 0)
	{
		return (0);
	}
	else
	return (1);

	is_prime_number(n);

}
