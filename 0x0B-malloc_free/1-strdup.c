#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a allocated memory.
 * @str: string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *nstr, *temp;
	int i, j = 0, len = 1;

	temp = str;
	for (i = 0; str[i] != '\0'; i++)
	{
		str++;
		len++;
	}
	str = temp;
	nstr = malloc(sizeof(char) * len);
	temp = nstr;
	if (nstr != NULL)
	{
		while (j < len)
		{
			nstr[j] = *str;
			j++;
			str++;
		}
		nstr[j] = '\0';
		return (temp);
	}
	else
		return (NULL);
}
