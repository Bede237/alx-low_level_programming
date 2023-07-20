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

	char *p;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		if (separator == NULL)
		{
			separator == "";
		}

		p = va_arg(ap, char*);

		if (i == (((int)n) - 1))
		{
			printf("%s", p);
		}
		else if (p == NULL)
		{
			printf("nil");
		}
		else
		{
			prinf("%s%s", p, separator);
		}

	}

	va_end(ap);

	 printf("\n");
}
