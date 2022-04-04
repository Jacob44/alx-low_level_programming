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
	char *nstr =  malloc(sizeof(str));

	if (str == NULL)
		return NULL;
	nstr = str;
	return (nstr);
}
