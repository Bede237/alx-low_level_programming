#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return(-1);

	int n;
	if (cmp != NULL)
	{
		for (n = 0; n < size; n++)
		{
			cmp(array[n]);
			if (cmp(array[n]) != 0)
				return(i);
		}
	}

	return(-1);
}
