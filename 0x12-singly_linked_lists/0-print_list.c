#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing all the elements of a linked list
 * @h: pointer to the first node in the list
 *
 * Returns the number of nodes printed.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
printf("[%lu] %s\n", count++, current->str);
current = current->next;
}

if (current == NULL)
printf("[0] (nil)\n");

	return (count);
}
