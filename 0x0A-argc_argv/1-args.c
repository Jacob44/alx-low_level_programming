#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments.
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: 0 if there is success.
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
