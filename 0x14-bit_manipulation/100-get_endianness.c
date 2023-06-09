#include "main.h"

/**
 * get_endianness - Checking if a machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int d = 1;
	char *c = (char *)&d;

	return (*c);
}
