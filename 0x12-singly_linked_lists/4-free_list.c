#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function to Frees a linked list.
 * @head: Pointer to the list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);

		free(current);

		current = next
			;
	}
}
