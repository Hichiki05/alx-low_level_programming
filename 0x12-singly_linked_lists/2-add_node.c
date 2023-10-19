#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);
	list_t *new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);
	new_node->str = malloc(sizeof(char) * (strlen(str) + 1));

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
	strcpy(new_node->str, str);
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}