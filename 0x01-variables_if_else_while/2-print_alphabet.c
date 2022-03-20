#include <stdio.h>

/**
 * main - prints all lower case letters
 *
 * Return: zero
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
