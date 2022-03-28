#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: a pointer
 * @c: a character c
 *
 * Return: pointer to the first occurance of c or NULL
 */
char *_strchr(char *s, char c)
{
	int len = 1, i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
