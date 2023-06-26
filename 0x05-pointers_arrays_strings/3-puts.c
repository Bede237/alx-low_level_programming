#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - ouputs a string
 * @str: input string
 */
void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0;i < len;i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
