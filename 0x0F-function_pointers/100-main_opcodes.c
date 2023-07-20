#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: number of cmd line args
 * @argv: list of cmd args
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
