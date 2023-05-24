#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array and returns its index
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare the elements
 *
 * Return: The index of the first element for which the comparison function
 *         returns non-zero, or -1 if no elements match or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]))
			return (d);
	}

	return (-1);
}
