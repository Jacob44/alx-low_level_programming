#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned integer.
 * @b: a binary value
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1, bitsize = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
		bitsize++;
	for (i = (bitsize - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}
	return (res);
}
