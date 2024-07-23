#ifndef MY_DOG_H
#define MY_DOG_H

/**
 * struct dog - defines new type
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Dog owner's name
 * Description: my first struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
