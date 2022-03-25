#include <stdio.h>

/**
 * reverse_array - reverses contents of an array.
 * @n: number of elements of the array.
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
