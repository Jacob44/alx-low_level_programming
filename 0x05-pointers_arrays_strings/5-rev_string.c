#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: string in reverse
*/
void print_rev(char *s)
{
	int j;
	int i;
	int len;
	char revs[] = {};

	j = 0;
	i = 0;
	len = 0;
	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	for (j = (len - 1); j >= 0; j--)
	{
		rev[i++] = s[j];
	}
	s = rev;
}

