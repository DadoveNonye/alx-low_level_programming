#include "main.h"

/**
 * _strlen_recursion - a function that returns lenght of a string
 * @s: character to be checked
 * Return: leng
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}
	return (leng);
}
