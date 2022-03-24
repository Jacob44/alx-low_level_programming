#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *conc = dest;
	int j = 0;

	while (*dest)
		dest++;
	while (*src && j <= n)
	{
		*dest++ = *src++;
		j = j + 1;
	}
	if (j <= n)
		*dest = '\0';
	return (conc);
}
