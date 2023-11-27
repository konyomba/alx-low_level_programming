#include "main.h"

/**
 * read_textfile - reads a file
 * @filename: filename
 * @letters: letters printed
 * Return: letters ptinted
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t temp, nwr;
	char *buf;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	temp = read(fp, buf, letters);
	nwr = write(STDOUT_FILENO, buf, temp);

	close(fp);

	free(buf);

	return (nwr);
}
