#include "main.h"
/**
 * _isdigit: Test if input is a digit or not
 * @c: input to be checked
 * Return: 1 is true, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
