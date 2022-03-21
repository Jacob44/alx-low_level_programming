#include <stdio.h>
#include "main.h"

/**
 * swap_int - takes a pointer and updates the value to 98
 * @a: first pointer
 * @b: second pointer
 *
 * Return: returns swapped value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

