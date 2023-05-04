#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int y;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[d] = src[y];
		d++;
		y++;
	}

	dest[d] = '\0';
	return (dest);
}
