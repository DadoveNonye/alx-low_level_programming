#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  A function that returns the
 * sum of all its paramters.
 * @n: Number of paramters passed
 * @...: Number of paramters to calculate the sum.
 *
 * Return: 0 || sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int i, sum = 0;

	va_start(j, n);

	for (i = 0; i < n; i++)
		sum += va_arg(j, int);

	va_end(j);

	return (sum);
}
