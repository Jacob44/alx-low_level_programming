#include <stdio.h>

/**
 * _strspn - gets the prefix of a prefix substring
 * @s: a pointer
 * @accept: prefix pointer
 *
 * Return: length of the bytes found in the s from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int siz = 0;
	char *temp = s;

	while (*accept)
	{
		s = temp;
		while (*s)
		{
			if (*s == *accept)
			{
				siz++;
				break;
			}
			s++;
		}
		accept++;
	}
	return (siz);
}
