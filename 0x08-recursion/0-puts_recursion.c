#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char *temp;

	temp = s;
	while (*s)
		s++;
	_putchar(*s);
	s = temp;
	_puts_recursion(s);
}
