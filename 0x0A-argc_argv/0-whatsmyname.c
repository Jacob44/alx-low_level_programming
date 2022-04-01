#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program.
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: 0 if there is success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
