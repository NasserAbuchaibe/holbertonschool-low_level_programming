#include "holberton.h"
/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number letters of file
 * Return: total number letters printed and reads
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t totlet, fail;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	totlet = read(fd, buffer, letters);
	if (totlet == -1)
	{
		free(buffer);
		return (0);
	}
	fail = write(STDOUT_FILENO, buffer, totlet);
	if (fail != totlet)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (totlet);
}

