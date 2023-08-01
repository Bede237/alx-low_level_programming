#include "main.h"
/**
 * array_range - creates array of int
 * @min: min value
 * @max: max value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int len = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = (int *) malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (len = 0; min <= max; len++)
	{
		p[len] = min;

		min += 1;
	}

	return (p);

}
