#include "main.h"
/**
 * read_textfile - reads and prints textfile content to sreen
 * @filename: file name
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char p[1024];
	int i = 0;
	int n = 0;
	int m = 0;

	if (p == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (0);
	}

	n = read(i, p, letters);

	if (n == -1)
	{
		return (0);
	}

	m = write(1, &p[0], n);
	if ((m < n) || (m == -1))
	{
		return (0);
	}

	return (m);
}
