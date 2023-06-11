#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: A pointer to the listint_t list to be freed.
 *
 * Description: This function frees a linked list by deallocating each node
 *              and setting the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
