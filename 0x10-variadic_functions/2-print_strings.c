#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string input
 * @separator: separates output string
 * @n: number of strings input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		if (separator == NULL)
		{
			separator == "";
		}

		if (i == (((int)n) - 1))
		{
			printf("%s", va_arg(ap, char*));
		}
		else
		{
			prinf("%s%s", va_arg(ap, char*));
		}

	}

	 printf("\n");
}
