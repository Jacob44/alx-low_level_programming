#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize.
 *
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *charray = malloc(size);
	unsigned int i = 0;

	if (charray == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (; i < size; i++)
	{
		charray[i] = c;
	}
	return (charray);
}
