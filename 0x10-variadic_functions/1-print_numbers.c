#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints a string
 * @separator: seperates strings
 * @n: number of string inputs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		if (separator == NULL)
		{
			separator = "";
		}

		if (i == (((int)n) - 1))
		{
			printf("%d", va_ar(ap, int));
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}

	va_end(ap);

	printf("\n");
}
