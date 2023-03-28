#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: 0
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
