#ifndef DOG_H
#define DOG_H

/**
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
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
