#include <stdlib.h>
#include "origin.h"

/**
 * print_list - a fnct
 * @h: a pointer
 * Return: the nbr of nodes
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
