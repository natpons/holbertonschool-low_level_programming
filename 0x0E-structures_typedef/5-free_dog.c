#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - creates a new dog
 *
 * @d: pointer to a dog's name
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
