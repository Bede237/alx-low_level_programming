#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 9)
		{
			putchar(a + '0');
			 putchar('\n');
		} else
		{
			putchar(a + '0');
			putchar(", ");
		}
	}
	return (0);
}
