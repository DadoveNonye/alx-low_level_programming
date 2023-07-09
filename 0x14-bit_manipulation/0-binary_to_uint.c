#include "main.h"

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b: points to the string 0 | 1
 * Return: the converted number || 0 if more
 * than one char in b
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		num = 2 * num + (b[n] - '0');
	}

	return (num);
}
