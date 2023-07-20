#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all inputs to function
 * @n: number of inputs
 *
 * Return: returs sum of all inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
