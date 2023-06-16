#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: filled memory area
 * @b: copied char
 * @n: number of times to copy char
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - function that allocates memory for an arrayusing malloc
 * @nmemb: num of ele in the array
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *chn;

	if (nmemb == 0 || size == 0)
		return (NULL);

	chn = malloc(size * nmemb);

	if (chn == NULL)
		return (NULL);

	_memset(chn, 0, nmemb * size);

	return (chn);
}
