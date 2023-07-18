#include "dog.h"
/**
 * init_dog - initializes variables of struct dog
 * @d: pointer to struct dog
 * @name: variable
 * @age: variable
 * @owner: variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
