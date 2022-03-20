#include <stdio.h>

/**
 * main - prints all lower case letters
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');
	putchar('\n');

	return (0);
}
