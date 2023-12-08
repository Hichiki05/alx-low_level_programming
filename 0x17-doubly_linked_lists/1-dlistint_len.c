#include "lists.h"

/**
 * dlistint_len - returns the numbe
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int _count;

	_count = 0;

	if (h == NULL)
		return (_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		_count++;
		h = h->next;
	}

	return (_count);
}
