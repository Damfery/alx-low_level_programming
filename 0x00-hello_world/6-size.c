#include <stdio.h>

/**
 * main - print using puts
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of int: %lu bytes\n", sizeof(charType));
	printf("Size of float: %lu bytes\n", sizeof(intType));
	printf("Size of long: %lu bytes\n", sizeof(longintType));
	printf("Size of long long int: %lu bytes\n", sizeof(longlongintType));
	printf("Size of float: floatType: %lu bytes \n", sizeof(floatType));

	return (0);
}

