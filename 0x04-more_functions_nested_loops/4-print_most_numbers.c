#include "main.h"

/**
 * print_most_numbers - prints num 0-9 expect 2,4
 * Return: 0 0r 1
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar ((i % 10) + '0');
	}
			_putchar ('\n');
}
