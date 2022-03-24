#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: allowed byte size
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *conc = dest;
	int j = 0;
	int srclen = 1;

	for (j = 0; src[j] != '\0'; j++)
		srclen++;

	if (srclen < n)
	{
		while (*src)
			*dest++ = *src++;
		*dest = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
			*dest++ = *src++;
	}
	return (conc);
}
