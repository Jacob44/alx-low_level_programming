#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: the multiplication resutlt or error.
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
