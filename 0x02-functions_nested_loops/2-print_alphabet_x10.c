#include "main.h"
/**
 * 2-print_alphabet_x10 - prints lower case alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letters;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
	}
	_putchar('\n');
}
	
