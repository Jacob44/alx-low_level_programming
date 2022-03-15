#include <unistd.h>

/*
 * _putchar - writes the character c to stdout
 * @c - the printed charaacter
 *
 * Return equals 1 during success
 * -1 is returned during error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
