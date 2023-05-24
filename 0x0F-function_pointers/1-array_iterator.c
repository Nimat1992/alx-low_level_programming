#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a given action on each element of an array
 * @array: The array
 * @size: The number of elements in the array
 * @action: Pointer to the function to be executed on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;

	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}
