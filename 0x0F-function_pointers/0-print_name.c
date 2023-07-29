#include "function_pointers.h"
/**
 * print_name - prints name of person
 * @name: name parameter
 * @f: function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
