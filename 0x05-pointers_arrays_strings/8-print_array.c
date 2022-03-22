#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: int pointer
 * @n: number of elements of the array
 *
 * Return: prints comma separated contents of the array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == (n - 1))
			printf("%d", a[j]);
		else
			printf("%d, ", a[j]);
	}
	printf("\n");
}

