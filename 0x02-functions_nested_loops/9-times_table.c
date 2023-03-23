#include "main.h"

/**
 * times_table - 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mut, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mut = 1; mut <= 9; mut++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mut;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
