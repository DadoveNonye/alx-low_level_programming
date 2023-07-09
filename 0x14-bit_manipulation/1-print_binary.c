#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int b, num = 0;
	unsigned long int cur;

	for (b = 63; b >= 0; b--)
	{
		cur = n >> b;

		if (cur & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
