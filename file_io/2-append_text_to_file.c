#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: string to add at the end of file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr;

	if (filename == NULL)
		return (-1);
	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr == -1)
		return (-1);
	if (text_content != NULL)
		dprintf(fptr, "%s", text_content);
	close(fptr);
	return (1);
}
