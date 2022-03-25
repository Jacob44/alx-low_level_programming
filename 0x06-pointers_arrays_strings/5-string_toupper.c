#include <stdio.h>

/**
 * string_toupper - changes the lowercase letters to uppercase.
 * @s: string.
 *
 * Return: the modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
