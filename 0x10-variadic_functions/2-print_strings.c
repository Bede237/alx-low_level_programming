#include "variadic_functions.h"
#include <stdarg.h>
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

	for (i = 0; i < (int)n; i = va_arg(ap, int))
	{
		if (separator == null)
		{
			separator = "";
		}

		if (i = (n-1))
		{
			printf("%d", i);
		}
		else
		{
			printf("%d%s", i, separator);
		}
	}

	va_end(ap);

	printf("\n");
}
