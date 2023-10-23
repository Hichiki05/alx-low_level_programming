#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - a fnct
 * @head: a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
