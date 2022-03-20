#include <stdio.h>

/**
 * main - prints all the number of base 16 in lower case
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');
	for (x = 'a'; x <= 'e'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
