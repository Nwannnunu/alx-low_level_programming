#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function to read and write a file
 * @filename: pointer to file to be read
 * @letters: number of letters to read and print
 * Return: always successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdread, fdwrite, fdclose;
	char *text;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, text, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, text, fdread);
	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
