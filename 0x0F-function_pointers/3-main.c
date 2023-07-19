#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (argv[2][0] != '/' &&  argv[2][0] != '-' && argv[2][0] != '+' && argv[2][0] != '%' && argv[2][0] != '*')
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", (get_op_func(argv[2]))(a, b));
	return (0);
}
