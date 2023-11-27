#include "main.h"

/**
 * append_text_to_file - appends txt to file
 * @filename: filename
 * @text_content: content
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int letter;
	int rwr;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++);
		rwr = write(fp, text_content, letter);
		if (rwr == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
