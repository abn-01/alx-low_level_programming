#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	ssize_t read_count, write_count;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
	{
		fclose(fp);
		return (0);
	}

	read_count = fread(buf, 1, letters, fp);
	buf[read_count] = '\0';

	write_count = write(STDOUT_FILENO, buf, read_count);

	free(buf);
	fclose(fp);

	if (read_count != write_count)
		return (0);

	return (read_count);
}
