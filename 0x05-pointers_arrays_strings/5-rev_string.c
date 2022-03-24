#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: string in reverse
*/
void rev_string(char *s)
{
	int j = 0;
	int i;
	int len = 0;
	char rev = &s;

	printf("%s\n", rev);
	for (i = 0; s[i] != '\0'; i++)
		len++;
	printf("%d\n", len);
	for (i = (len - 1); i >= 0; i--)
	{
		printf("%c ", s[i]);
		rev[j] = s[i];
		j++;
		printf("%c\n", rev[j]);
	}
	s = rev;
}

