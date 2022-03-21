#include <stdio.h>
#include "main.h"

/**
 * _puts2 - prints every other character
 * @str: string
 *
 * Return: prints the string
 */
void _puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0';)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}

