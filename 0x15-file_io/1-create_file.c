#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: text to be passed
 *
 * Return: 1 on (success), -1 on (failure)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t i = 0;
	int n = 0;
	int j = 0;
	int count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (n == -1)
		return (-1);

	while (text_content[j] != '\0')
	{
		count = count + 1;
		j++;
	}

	i = write(n, text_content, count);

	if (i == -1)
		return (-1);

	close(n);

	return (1);
}
