#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int y;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[d] = src[y];
	d++;
	y++;
	}
	dest[d] = '\0';
	return (dest);
}
