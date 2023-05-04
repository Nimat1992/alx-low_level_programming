#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoding a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int d;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[d] == data1[y])
			{
				s[d] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
