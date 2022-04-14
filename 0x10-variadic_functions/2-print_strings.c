#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *st;

	if (n == 0)
		return;
	va_start(ap, n);
	for (; i < n; i++)
	{
		st = va_arg(ap, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}
