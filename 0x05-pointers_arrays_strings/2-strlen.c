#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the string length
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j = 1;
	int len = 0;
	char ch = s[0];

	while (ch != '\0')
	{
		len++;
		ch = s[j++];
	}
	return (len);
}

