#include "main.h"

/**
 * flip_bits - A function that returns the number of
 *  bits you would need to flip to get from one
 *  number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, num = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		cur = exclusive >> b;
		if (cur & 1)
			num++;
	}

	return (num);
}

