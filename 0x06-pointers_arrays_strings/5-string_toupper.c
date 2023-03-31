#include "main.h"

/**
 * string_toupper - a function that changes lowercase
 * to upper case
 * @s: an input string
 * Return: pointer to convert
 */
char *string_toupper(char *s)
{
	char *conv = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (conv);
}
