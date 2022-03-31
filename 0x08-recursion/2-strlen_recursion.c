#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int slen = 0;

	if (*s)
	{
		printf("%d\n", 1);
		return (1 + _strlen_recursion(s + 1));
	}
	return (slen);
}
