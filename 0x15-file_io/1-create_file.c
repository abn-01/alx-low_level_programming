#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
/**
 * create_file - creates a file with the given text content
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, write_count;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	len = 0;
	while (text_content && *(text_content + len))
		len++;

	write_count = write(fd, text_content, len);
	if (write_count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
