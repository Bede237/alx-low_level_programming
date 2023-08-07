#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - adds text to foot of file
 * @filename: name of file
 * @text_content: text to be added
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	ssize_t m;
	int i = 0;
	int count = 0;

	if (filename == NULL)
		return (-1);

	n = open(filename, O_APPEND | O_WRONLY);

	if (n == -1)
		return (-1);

	if (text_content == NULL)
		return  (1);

	while (text_content[i] != '\0')
	{
		count = count + 1;
		i++;
	}

	m = write(n, text_content, count);
	close(n);

	if (m == -1)
		return (-1);

	return (1);
}
