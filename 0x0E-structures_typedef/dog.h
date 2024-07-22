#ifndef MY_DOG_H
#define MY_DOG_H

/**
 *
 * struct dog - defines new type
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Dog owner's name
 * Description: my first struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
