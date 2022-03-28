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
	unsigned int siz = 0, flag;
	char *temp = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				siz++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = temp;
		if (flag == 0)
			break;
	}
	return (siz);
}
