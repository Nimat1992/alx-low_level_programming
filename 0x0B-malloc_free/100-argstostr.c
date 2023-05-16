#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int g, n, e = 0, l = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
		for (n = 0; av[g][n]; n++)
		l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
	for (n = 0; av[g][n]; n++)
	{
		str[e] = av[g][n];
		e++;
	}
	if (str[e] == '\0')
	{
		str[e++] = '\n';
	}
	}
	return (str);
}
