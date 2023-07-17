#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	if (__FILE__ == NULL)
	{
		return (0);
	}
	printf("%s\n", __FILE__);
	return (0);
}
