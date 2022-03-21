#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 *
 * Return: prints the string
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}

