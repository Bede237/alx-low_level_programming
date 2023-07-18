#include "dog.h"
#include <stdlib>
/**
 * free_dog - frees the memory
 * @d: pointer to memory allocated
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
