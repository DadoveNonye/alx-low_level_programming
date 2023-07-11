#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: text to be read
 * @letters: number of letters being read
 * Return: w- actual number of bytes read and write
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a;
	ssize_t wl;
	ssize_t tl;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tl = read(a, buffer, letters);
	wl = write(STDOUT_FILENO, buffer, tl);

	free(buffer);
	close(a);
	return (wl);
}
