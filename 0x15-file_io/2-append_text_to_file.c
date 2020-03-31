#include "holberton.h"
/**
 * append_text_to_file- append text to file
 * @filename: pointer to file
 * @text_content: string to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cont, fail;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (cont = 0; text_content[cont] != '\0'; cont++)
	{
	}
	fail = write(fd, text_content, cont);
	if (fail == -1)
		return (-1);
	close(fd);
	return (1);
}
