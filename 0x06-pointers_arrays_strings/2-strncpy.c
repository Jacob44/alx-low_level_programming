#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copys strings.
 * @dest: destination string
 * @src: source string
 * @n: allowed byte size
 * Return: copied string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int j = 0;
	char *cpy = dest, *temp = src;

	for (j = 0; src[j] != '\0'; j++)
	{
		slen++;
		src++;
	}
	slen++;
	if (n > slen)
		n = slen;
	src = temp;
	for (j = 0; j < n; j++)
		*dest++ = *src++;
	return (cpy);
}
