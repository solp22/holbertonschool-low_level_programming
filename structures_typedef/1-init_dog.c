#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable struct dog
 * @d: pointer for malloc
 * @name: pointer to name of dog
 * @age: pointer to age of dog
 * @owner: pointer to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
