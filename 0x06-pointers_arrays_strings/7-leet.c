#include "main.h"
/**
 * leet - function that encode into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int d, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[y] == s1[y])
			{
				n[d] = s2[y];
			}
		}
	}
	return (n);
}
