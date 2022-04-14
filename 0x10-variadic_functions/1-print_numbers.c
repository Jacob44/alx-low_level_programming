#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n == 0 || separator == NULL)
		return;
	va_start(ap, n);
	for (; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
