#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings.
 * @s1: first string
 * @s2: second string
 * 
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;
	int n, i = 0;
	int cmpr = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	if (s1len > s2len)
		n = s1len;
	else
		n = s2len;	
	for (i = 0; i<=n; i++)
	{
		cmpr = s1[i] - s2[i];
		if (cmpr != 0)
		{
			return cmpr;
			break;
		}
	}
	return cmpr;
}
