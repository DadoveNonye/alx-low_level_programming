#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: string input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int lenght = 0, i = 0;
	char rev;

	while (s[lenght] != '\0')
		lenght++;

	while (i < lenght--)
	{
		rev = s[i];
		s[i++] = s[lenght];
		s[lenght] = rev;
	}
}
