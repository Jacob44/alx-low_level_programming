#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int element_checker(struct dog *d);

/**
 * print_dog - prints a struct dog
 * @d: structure
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (element_checker(d))
		printf("(nil)");
	/*if ((*d).name == "NULL")
		printf("Name: (nil)");*/
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}

int element_checker(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
		return (1);
	else
		return (0);
}
