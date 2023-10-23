#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - a fnct
 * @head: A pointer to a pointer to the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	else
	{

		listint_t *temp = *head;
		int data = temp->n;

		*head = temp->next;
		free(temp);

	return (data);
	}
}
