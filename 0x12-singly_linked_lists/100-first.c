#include <stdio.h>

/* Using constructors in C */
void constr(void) __attribute__((constructor));
/**
 * constr - A constructor function that prints a message
 * Return: Nothing
 */
void constr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
