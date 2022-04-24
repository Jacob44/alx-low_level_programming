#include <stdio.h>
#include "main.h"

/**
 * main - prints a _putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char p[] = "_putchar";
	int i = 0;

	for (; p[i] != '\0'; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
