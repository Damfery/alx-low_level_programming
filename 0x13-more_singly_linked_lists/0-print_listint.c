#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: integer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t var = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		var++;
	}
	return (var);
}
