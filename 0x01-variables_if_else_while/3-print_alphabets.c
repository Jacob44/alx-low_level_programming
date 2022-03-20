#include <stdio.h>

/**
 * main - prints all lower case and upper case letters
 *
 * Return: zero
 */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
