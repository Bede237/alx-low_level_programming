#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}
	for (a = 'A'; a <= 'F'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
