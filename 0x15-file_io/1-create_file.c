#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int size, fwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (size = 0; text_content[size] != '\0'; size++)
			;
		fwrite = write(fd, text_content, size);
		if (fwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
