#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - a fnct
 * @head: A pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
