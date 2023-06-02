#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing all the elements of a linked list
 * @h: pointer to the first node in the list
 *
 * Return: The size of the list
 */
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		y++;
	}

	return (y);
}
