#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers and prints the result.
 * @argc: number of commands
 * @argv: the commands
 *
 * Return: 0 if there is no error. 1 if the arguments are not number.
 */
int main(int argc, char *argv[])
{
	int add = 0, i;
	int intc;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		intc = atoi(argv[argc]);
		add += intc;		
	}
	 printf("%d\n", add);
	return (0);
}

