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
			break;
		} else
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
