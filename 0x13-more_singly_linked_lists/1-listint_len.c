#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - the fnct
 * @h: a pointer
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
