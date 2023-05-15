#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *creat_array - creating an array of chars
 * @c: the char to whose address is being returned
 * @size: the size of the memory to print
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		p[b] = c;
	}
	return (p);
}
