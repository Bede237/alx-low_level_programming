#include "main.h"
/**
 * malloc_checked - creats memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: 98(fail)
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
