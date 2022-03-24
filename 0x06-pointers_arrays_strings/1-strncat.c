#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: allowed byte size
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *conc = dest;
	int j = 0;
	int srclen = 1;

	while (*dest)
		dest++;
	for (j = 0; src[j] != '\0'; j++)
		srclen++;

	if (srclen <= n)
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
