#include "holberton.h"
/**
 * read_textfile - read text file
 * @filename: filename
 * @letters: number of letters that print
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t da, wr, re;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	da = open(filename, O_RDWR);

	if (da == -1)
		return (0);

	re = read(da, buff, letters);
	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, re);
	if (wr == -1 || wr != re)
		return (0);

	re = close(da);
	if (re == -1)
		return (0);

	free(buff);
	return (wr);
}
