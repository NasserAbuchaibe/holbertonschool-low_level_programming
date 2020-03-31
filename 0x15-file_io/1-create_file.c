#include "holberton.h"
/**
 * create_file - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to file
 * @text_content: string
 * Return: total number letters printed and reads
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cont, nfile;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (cont = 0; text_content[cont] != '\0'; cont++)
	{
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	nfile = write(fd, text_content, cont);
	if (nfile == -1)
		return (nfile);
	close(fd);
	return (1);
}
