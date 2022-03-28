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
	int alen = 1, i = 0, slen = 1, j = 0;
	int siz = 0;

	for (i = 0; accept[i] != '\0'; i++)
		alen++;
	for (i = 0; s[i] != '\0'; i++)
		slen++;
	for (i = 0; i < alen; i++)
	{
		for (j = 0; j < slen; j++)
		{
			if (accept[i] == s[j])
			{
				siz++;
				break;
			}
		}
	}
	return (siz);
}
