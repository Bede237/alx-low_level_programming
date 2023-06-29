#include "main.h"
#include <string.h>
/**
 * _strcat - concatinates 2 strings
 * @dest: first string
 * @src: second sting for concatination
 * Return: pointer to sting dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	*ptr = strcat(dest, src);
	return (ptr);
}
