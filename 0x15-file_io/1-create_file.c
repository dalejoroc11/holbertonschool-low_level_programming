#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: namefile
 * @text_content: contexttextfile
 * Return: 1,-1
 */
int create_file(const char *filename, char *text_content)
{
	int da;
	size_t l;
	ssize_t wr;

	if (!filename)
		return (-1);

	da = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (da == -1)
		return (-1);

	if (!text_content)
	{
		close(da);
		return (1);
	}

	for (l = 0; text_content[l] != '\0'; l++)
		;

	wr = write(da, text_content, l);
	if (wr == -1)
		return (-1);

	close(da);
	return (1);
}
