#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: prints the string in reverse
*/
void print_rev(char *s)
{
	int j;
	int len;

	len = _strlen(s);
	for (j = len; j == 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

