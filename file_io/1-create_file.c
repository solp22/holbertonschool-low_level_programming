#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: string with content to put on file
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fptr;

	if (filename == NULL)
		return (-1);
	fptr = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fptr == -1)
		return (-1);
	if (text_content != NULL)
		dprintf(fptr, "%s", text_content);
	close(fptr);
	return (1);
}
