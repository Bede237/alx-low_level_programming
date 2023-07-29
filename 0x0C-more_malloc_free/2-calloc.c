#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of array
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if ( (nmemb || size) == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = '0';
	}

	return (p);

}
