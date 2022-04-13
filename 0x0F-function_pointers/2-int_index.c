#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: compare two elements in array
 *
 * Return: index for the first element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
