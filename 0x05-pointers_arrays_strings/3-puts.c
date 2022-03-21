#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: prints the string
 */
void _puts(char *str)
{
	int j = 1;
	char ch = str[0];

	while (ch != '\0')
	{
		ch = str[j++];
		_putchar(ch);
	}
	_putchar('\n');
}

