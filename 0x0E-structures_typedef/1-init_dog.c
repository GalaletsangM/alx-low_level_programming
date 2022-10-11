#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
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
