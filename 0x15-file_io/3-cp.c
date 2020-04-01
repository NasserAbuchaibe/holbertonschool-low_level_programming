#include "holberton.h"
void _close(int file);
/**
 * main- copy file
 * @argc: size av
 * @av: string
 * Return: int
 */
int main(int argc, char *av[])
{
	int filef, filet, filer, filew;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filef = open(av[1], O_RDONLY);
	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	filet = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filet == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do {
		filer = read(filef, buffer, 1024);
		if (filer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		filew = write(filet, buffer, filer);
		if (filew == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (filer == 1024);
	_close(filef);
	_close(filet);
	return (0);
}


/**
 * _close - close file
 * @file: fd of file tu close
 * Return: void
 */
void _close(int file)
{
	int fail;

	fail = close(file);
	if (fail == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
