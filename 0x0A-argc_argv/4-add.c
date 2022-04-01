#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers and prints the result.
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: 0 if there is no error. 1 if the arguments are not number.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1;
	int intc;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (; i < argc; i++)
		{
			intc = atoi(argv[i]);
			if (!intc)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += intc;
			}
		}
		printf("%d\n", add);
	}
	return (0);
}

