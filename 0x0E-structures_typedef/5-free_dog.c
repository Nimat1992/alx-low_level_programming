#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Struct dog to free.
 *
 * Description: This function frees the memory allocated for the members
 * name, owner, and the struct dog itself.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
