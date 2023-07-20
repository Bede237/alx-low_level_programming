#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints variables of all data types
 * @format:  a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *p;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format)
	{
		while (format[i] != '\0')
		{
			if (i != 0)
				printf(", ");
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					p = va_arg(ap, char *);
					if (p == NULL || p == "")
						p = "(nil)";
					printf("%s", p);
					break;
				default:
					printf("\b\b");
					break;
			}
			i++;
		}
		break;
	}
	va_end(ap);
	printf("\n");
}
