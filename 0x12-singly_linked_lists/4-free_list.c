#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases the memory allocated for a list.
 * @head: A pointer to the first node of the list to free.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		if (current->str)
			free(current->str);

		free(current);

		current = next;
	}
}
