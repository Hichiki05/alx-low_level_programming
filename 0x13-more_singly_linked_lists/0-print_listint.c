#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - the fnct
 * @h: a pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
