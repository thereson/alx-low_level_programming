#include "main.h"

/**
 * append_text_to_file - appends to the end the end of a file
 * @filename: file to be appended to
 * @text_content: content to be append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wcont, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wcont = write(fd, text_content, i);
		if (wcont != i)
			return (-1);
	}

	close(fd);

	return (1);
}
