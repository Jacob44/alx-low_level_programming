#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: destination char pointer
 * @src: source char pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	int len = 1;

	for (j = 0; src[j] != '\0'; j++)
		len++;
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

