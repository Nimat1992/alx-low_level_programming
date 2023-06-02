#include "lists.h"

/**
 * list_len - returning the number of elements in a linked list list_t
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t w = 0;

	while (h != NULL)
	{
		w++;
		h = h->next;
	}

	return (w);
}
