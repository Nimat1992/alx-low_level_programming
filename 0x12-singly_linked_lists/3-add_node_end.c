#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adding a new node at the end of a linked list.
 * @head: Pointer to the list_t list.
 * @str: String to put in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	size_t len = strlen(str);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
