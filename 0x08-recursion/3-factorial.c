#include "main.h"

/**
 * factorial - A function that retuns the factorial of a num
 * @n: num to be checked
 * Return: 0 or 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
