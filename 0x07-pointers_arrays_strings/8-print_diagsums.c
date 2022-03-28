#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size: size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int asize = (size * size);
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < asize; i += (size + 1))
	{
		sum1 += a[i];
	}
	for (; j < (asize - 1); j += (size - 1))
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
