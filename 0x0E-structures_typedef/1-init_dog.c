#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name of the new dog
 * @age: new dog's age
 * @owner: the dog owner
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
