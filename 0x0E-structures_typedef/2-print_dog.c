#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints info in struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		continue;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	 if (d->age == NULL)
        {
                printf("AGE: (nil)\n");
        }
        else
        {
                printf("AGE: %s\n", d->age);
        }

	 if (d->owner == NULL)
        {
                printf("Owner: (nil)\n");
        }
        else
        {
                printf("Owner: %s\n", d->Owner);
        }
}
