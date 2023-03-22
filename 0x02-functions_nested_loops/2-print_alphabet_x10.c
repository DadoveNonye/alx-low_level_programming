/* 2-print_alphabet_x10.c */
#include "main.h"

/**
 * main - program that prints alphebet 10x
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = "a", i <= "z", i++)
	{
		if (i < 11)
		_putchar (i);
	}
	_putchar ("\n");

	return (0);
}
