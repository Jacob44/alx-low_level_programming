#include <stdio.h>
int sep_check(char c);

/**
 * cap_string - capitalizes a letter after each separator
 * @s: string.
 *
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i++] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (sep_check(s[i - 1]) && (s[i] >= 97 && s[i] <= 122))
			s[i] -= 32;
	}
	return (s);
}

/**
 * sep_check - check if the character is separator
 * @c: character to be checked.
 *
 * Return: 1 if it is a separator 0 if not
 */
int sep_check(char c)
{
	int j = 0;
	char separators[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (; j < 13; j++)
	{
		if (c == separators[j])
			return (1);
	}
	return (0);
}
