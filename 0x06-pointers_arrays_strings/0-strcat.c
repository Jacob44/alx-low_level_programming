#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *conc = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (conc);
}
