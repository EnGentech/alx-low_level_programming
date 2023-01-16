#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: point to the memory
 * @name: take the dogs name
 * @age: take the dogs age
 * @owner: take the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
