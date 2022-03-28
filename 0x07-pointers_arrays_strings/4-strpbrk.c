#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a pointer
 * @accept: prefix pointer
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = temp;
	}
	return (NULL);
}
