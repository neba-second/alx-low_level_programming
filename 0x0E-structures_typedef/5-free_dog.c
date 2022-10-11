#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: the pointer to dog object
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

