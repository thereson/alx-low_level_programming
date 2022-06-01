#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to file
 * Return: -1 if filename is NULL, 1 on Success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wcont, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
