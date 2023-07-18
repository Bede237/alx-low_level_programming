#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variables of struct dog
 * @d: pointer to struct dog
 * @name: variable
 * @age: variable
 * @owner: variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
