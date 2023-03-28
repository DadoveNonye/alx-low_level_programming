#include "main.h"

/**
 * swap_int - function that swaps value
 * of two integer
 * @a: firr input
 * @b: second input
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
