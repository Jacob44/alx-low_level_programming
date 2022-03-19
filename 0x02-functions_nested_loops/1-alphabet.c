#include <stdio.h>
#include "main.h"

/*
 * print _alphabet - prints the alphabet starting from a all the to z
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
