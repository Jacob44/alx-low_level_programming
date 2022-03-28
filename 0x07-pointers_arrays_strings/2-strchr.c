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
	int len = 1, i = 0;

	for (;s[i] != '\0'; i++)
		len++;
	i = 0;
	while (i < len)
	{
		s++;
		if (s[i] == c)
			return (s);
		i++;
	}
	return (NULL);
}
