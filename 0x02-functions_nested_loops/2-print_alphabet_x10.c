/* 2-print_alphabet_x10.c */
#include "main.h"

/**
 * print_alphabet_x10 - program that prints alphebet 10x
 * 
 */

void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (count < 10)
		_putchar (i);
	}
	_putchar ('\n');

}
