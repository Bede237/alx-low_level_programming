#include "function_pointers.h"
/**
 * array_iterator - function that ecutes another function on an array
 * @array: array to be used
 * @size: size of array
 * @action: function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
