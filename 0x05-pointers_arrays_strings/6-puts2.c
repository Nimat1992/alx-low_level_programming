
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int z = 0;
	char *y = str;
	int u;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	z = longi - 1;
	for (u = 0 ; u <= z ; u++)
	{
		if (u % 2 == 0)
	{
		_putchar(str[u]);
	}
	}
	_putchar('\n');
}
