#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		} else
		{
			putchar(a);
		}
	}
	putchar(a);
	return (0);
}

