#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint - the fnct
 * @head: a pointer to a pointer
 * @n: an int
 * Return: the address of the new element ,or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
