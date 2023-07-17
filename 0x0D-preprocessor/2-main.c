#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	if (__File__ == NULL)
	{
		return (0);
	}
	printf("%s\n", __File__);
	return (0);
}
