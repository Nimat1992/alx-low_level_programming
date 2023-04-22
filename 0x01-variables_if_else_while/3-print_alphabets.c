#include <stdio.h>

/**
 * main - prints the alphabet in both lowercase and in uppercase,
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int i;

		for (i = 0; i < 52; i++)
		{
			putchar(alp[i]);
		}
	putchar('\n');
	return (0);
}
