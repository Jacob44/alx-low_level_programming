#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @n: bytes of the memory area
 * @b: constant byte
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
