#include "main.h"
/**
 * _isalpha - checks if input is alphabet
 * @c: character to be checked
 * Return: 1 is for alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
