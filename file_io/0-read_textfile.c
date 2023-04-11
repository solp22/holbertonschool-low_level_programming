#include "main.h"

/**
 * read_textfile - reads a file and prints it
 * @filename: pointer to file
 * @letters: number of letter it shoud read and print
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char letter;
	unsigned int count = 0;
	FILE *fptr;
	
	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);
	letter = fgetc(fptr);
	while (letters > count && letter != EOF)
	{
		write(1, &letter, 1);
		letter = fgetc(fptr);	
		count++;
	}
	fclose(fptr);
	return (count);
}
