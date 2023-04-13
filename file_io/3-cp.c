#include "main.h"
/**
 * main - copy the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	ssize_t r, w;
	int fptr1, fptr2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fptr1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fptr1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fptr2 = open(argv[1], O_RDONLY);
	if (fptr2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r)
	{
		r = read(fptr2, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fptr1, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fptr1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr1), exit(100);
	if (close(fptr2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr2), exit(100);
	return (0);
}
