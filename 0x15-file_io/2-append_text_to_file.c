#include "main.h"
/**
 * append_text_to_file - function to append text to the end of file
 * @filename: name of file to append
 * @text_content: Null terminated string.
 * Return: always successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, len;

	if (filename == NULL)
		return (-1);
	fdopen = open(filename, O_WRONLY | O_APPEND);
	if (fdopen == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
	{
	fdwrite = write(fdopen, text_content, len);
	}
	if (fdwrite == -1)
		return (-1);
	close(fdopen);
	return (1);
}
