#include "dog.h"

/**
 * init_dog - intializes a variable type of struct dog
 * @d: object of the dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
