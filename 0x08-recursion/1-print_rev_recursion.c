#include "main.h"

/**
 * _print_rev_recursion - A function that prints string in rev
 * @s: string to be checked
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		 _print_rev_recursion(s + 1);
		 _putchar(*s);
	}
}
