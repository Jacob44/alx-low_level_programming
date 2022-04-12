#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the structure
 * @d: structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
