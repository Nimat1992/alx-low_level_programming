#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, r;

	sum1 = 0;
	sum2 = 0;

	for (r = 0; r < size; r++)
	{
		sum1 = sum1 + a[r * size + r];
	}

	for (r = size - 1; r >= 0; r--)
	{
		sum2 += a[r * size + (size - r - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
