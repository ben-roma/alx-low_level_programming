#include "main.h"

/**
 * create_file - function; this creates a file
 *
 * @filename:pointer: shows to the name of file to be created
 *
 * @text_content:pointer: shows to a string to write to file
 *
 * Return: gives a (-ve) -1 when function fails
 *         Elsewhere returns - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
		length++;

		write_result = write(fd, text_content, length);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

