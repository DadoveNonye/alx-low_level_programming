#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: first input
 * @src: seconf input
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *conc = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (conc);
}
