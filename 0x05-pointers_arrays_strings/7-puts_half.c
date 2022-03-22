#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints every other character
 * @str: string
 *
 * Return: prints the string
 */
void puts_half(char *str)
{
	int j;
	int strlen = 0;
	int n;

	for (j = 0; str[j] != '\0'; j++)
		strlen++;
	n = strlen / 2;
	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

