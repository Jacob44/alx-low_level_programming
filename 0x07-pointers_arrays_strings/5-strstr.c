#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: sring pointer
 * @needle: substring pointer
 *
 * Return: a pointer to the beggining of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp = haystack;

	while (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				return (needle);
			}
			haystack++;
		}
		needle++;
		haystack = temp;
	}
	return (NULL);
}
