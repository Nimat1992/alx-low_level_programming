#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adding a new node at the beginning of a linked list.
 * @head: Pointer to the list_t list.
 * @str: New string to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = strlen(str);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
