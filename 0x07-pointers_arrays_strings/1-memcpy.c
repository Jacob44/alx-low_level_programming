#include <stdio.h>

/**
 * _memcpy - copies memory area..
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: pointer to the dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
