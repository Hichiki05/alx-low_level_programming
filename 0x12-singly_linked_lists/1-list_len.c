#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
