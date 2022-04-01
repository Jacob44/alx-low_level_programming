#include <stdio.h>
#include "main.h"

/**
 * main - print each arguments.
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: 0 if there is success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
