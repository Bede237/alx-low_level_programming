#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new struct
 * @name: member type name
 * @age: member type age
 * @owner: member type owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}