#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string input
 * Return: Nothing
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	while (lenght)
		_putchar(s[--lenght]);

	_putchar('\n');
}
