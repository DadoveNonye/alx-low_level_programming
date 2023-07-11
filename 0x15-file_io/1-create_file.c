#include "main.h"

/**
 * create_file - A function that Creates a file.
 * @filename: name of the file to create.
 * @text_content: A pointer to a NULL terminated
 * string to write to the file.
 *
 * Return: If the function fails - -1.
 *         on success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdr, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdr, text_content, len);

	if (fdr == -1 || w == -1)
		return (-1);

	close(fdr);

	return (1);
}
